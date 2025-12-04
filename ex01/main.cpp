/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:13:02 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/03 19:28:34 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>
#include <iostream>

int	main(int ac, char *av[])
{
	std::string			strToN = av[1];
	std::string			name = av[2];
	int					N = 0;
	std::stringstream	getN;
	Zombie				*horde;

	if (ac == 3)
	{
		getN << strToN;
		getN >> N;
		horde = zombieHorde(N, name);
		if (!horde)
		{
			std::cout << "Error" << std::endl;
			std::cout << "Memory allocation failed" << std::endl;
			return (1);
		}
		for (int i = 0 ; i < N ; i++)
			horde[i].announce();
		delete [] horde;
		return (0);
	}
	std::cerr << "Error" << std::endl;
	std::cerr << "Check args" << std::endl;
	return (1);
}