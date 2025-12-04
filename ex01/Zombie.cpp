/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:13:00 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/03 15:13:22 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : _name(name)
{
	return ;
}

Zombie::Zombie( void ) : _name("Zombie")
{
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << getName() << " died (again ...)" << std::endl;
	return ;
}

void	Zombie::announce( void )
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

std::string	Zombie::getName( void ) const
{
	return (this->_name);
}