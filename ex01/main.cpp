/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:13:02 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/04 09:43:05 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>
#include <iostream>

int	main(int ac, char *av[])
{
	if (ac == 3)
	{
		std::string			strToN = av[1];
		std::string			name = av[2];
		int					N = 0;
		std::stringstream	getN;
		Zombie				*horde;

		getN << strToN;
		getN >> N;
		if (N <= 0 || N >= 214748364)
		{
			std::cout << "Error\nN Wrong value" << std::endl;
			return (1);
		}
		horde = zombieHorde(N, name);
		if (!horde)
		{
			std::cout << "Error\nMemory allocation failed" << std::endl;
			return (1);
		}
		for (int i = 0 ; i < N ; i++)
			horde[i].announce();
		delete [] horde;
		return (0);
	}
	std::cerr << "Error\nCheck args" << std::endl;
	return (1);
}