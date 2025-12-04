/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 19:00:54 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/04 06:26:37 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "streamUtils.hpp"

int	main(int ac, char *av[])
{
	if (ac == 4)
	{
		std::ifstream	filename(av[1]);
		if (filename.fail())
		{
			std::cerr << "Error\nCheck file descriptor" << std::endl;
			return (1);
		}
		if (isEmpty(filename))
		{
			std::cerr << "Error\nEmpty file descriptor" << std::endl;
			return (1);
		}
		std::string			s1 = av[2];
		std::string			s2 = av[3];
		std::string const	newFilename = getNewFilename(av[1]);
		std::ofstream	ofs(newFilename.c_str());
		writeOut(s1, s2, filename, ofs);
		return (0);
	}
	std::cerr << "Error\nCheck args" << std::endl;
	return (1);
}