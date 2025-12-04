/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 10:43:04 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/03 12:23:03 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string name ) : _name(name)
{
}

Zombie::~Zombie( void )
{
	std::cout << getName() << " died (again ...)" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << getName() << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name)
{
	this->_name = name;
}

std::string	Zombie::getName( void ) const
{
	return (this->_name);
}