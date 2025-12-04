/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:22:51 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/03 17:58:56 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( std::string name, Weapon &type ) : _name(name), _weapon(type)
{
}

HumanA::~HumanA(void)
{
}

void	HumanA::setName(std::string name)
{
	this->_name = name;
}

std::string	HumanA::getName( void ) const
{
	return (this->_name);
}

void	HumanA::attack(void)
{
	std::cout << this->getName() << " attacks with their " << this->_weapon.getType() << std::endl;
}
