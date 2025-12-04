/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:23:18 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/03 18:57:03 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon ( std::string type ) : _type(type)
{
}

Weapon::~Weapon( void )
{
}

const std::string& Weapon::getType() const
{
	return (_type);
}


void Weapon::setType(const std::string &type)
{
	_type = type;
}