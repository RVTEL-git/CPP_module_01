/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   streamUtils.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 19:23:04 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/04 06:25:28 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STREAMUTILS_HPP
#define STREAMUTILS_HPP

#include <iostream>
#include <fstream>

bool				isEmpty(std::ifstream& fd_in);
std::string const	getNewFilename(char *filename);
std::string			findAndReplace(const std::string& s1, const std::string& s2, const std::string& line);
void				writeOut(const std::string& s1, const std::string& s2, std::ifstream& fd_in, std::ofstream& fd_out);

#endif