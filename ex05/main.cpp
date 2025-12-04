/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 06:14:53 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/04 07:23:11 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int ac, char *av[])
{
	if (ac == 2)
	{
		Harl		Harl;
		std::string	level = av[1];

		Harl.complain(level);
		return (0);
	}
	std::cerr << "Error\nCheck args" << std::endl;
}