/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 06:14:23 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/04 07:54:21 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
	
}

Harl::~Harl()
{
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*functionPtr[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int			i = 0;

	while (i < 4)
	{
		if (level == levels[i])
			break ;
		i++;
	}

	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*functionPtr[0])();
			std::cout << std::endl;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			(this->*functionPtr[1])();
			std::cout << std::endl;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			(this->*functionPtr[2])();
			std::cout << std::endl;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*functionPtr[3])();
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return ;
}

void	Harl::_debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special\n-ketchup burger. I really do!" << std::endl;
}

void	Harl::_info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put\nenough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void	Harl::_warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for\nyears, whereas you started working here just last month." << std::endl;
}
void	Harl::_error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
