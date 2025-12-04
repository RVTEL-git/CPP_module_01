/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   streamUtils.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 19:43:01 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/04 06:25:24 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "streamUtils.hpp"

bool	isEmpty(std::ifstream& fd_in)
{
	if (fd_in.peek() == std::ifstream::traits_type::eof())
		return (true);
	return (false);
}

std::string const	getNewFilename(char *filename)
{
	std::string	newFilename = "";
	std::string	temp = filename;
	newFilename = temp.append(".replace");
	return ((std::string const)newFilename);
}

std::string findAndReplace(const std::string& s1, const std::string& s2, const std::string& line)
{
	if (s1.empty())
		return line;

	std::string result;
	result.reserve(line.size());

	std::size_t searchPos = 0;
	while (true)
	{
		std::size_t pos = line.find(s1, searchPos);
		if (pos == std::string::npos)
		{
			result.append(line, searchPos, std::string::npos);
			break;
		}
		result.append(line, searchPos, pos - searchPos);
		result += s2;
		searchPos = pos + s1.length();
	}
	return result;
}

void writeOut(const std::string& s1, const std::string& s2, std::ifstream& fd_in, std::ofstream& fd_out)
{
	std::string line;

	while (std::getline(fd_in, line))
	{
		std::string newLine = findAndReplace(s1, s2, line);
		fd_out << newLine;
		if (!fd_in.eof())
			fd_out << '\n';
	}
}