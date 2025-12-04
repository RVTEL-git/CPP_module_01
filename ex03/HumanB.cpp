/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:22:46 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/03 18:53:34 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string name ) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB(void)
{
}

std::string	HumanB::getName( void ) const
{
	return (this->_name);
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

bool	HumanB::checkWeapon( void )
{
	if (_weapon == NULL)
		return (false);
	else 
		return (true);
}

void	HumanB::attack(void)
{
	std::cout << this->getName() << " attacks with their ";
	if (!checkWeapon())
		std::cout << "bare hands" << std::endl;
	else
		std::cout << (*_weapon).getType() << std::endl;
}
