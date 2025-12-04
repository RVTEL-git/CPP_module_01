/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 10:42:57 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/03 12:32:27 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* newZombie( std::string name )
{
	Zombie	*newZ = new Zombie(name);
	if (!newZ)
	{
		std::cout << "Memory allocation failed" << std::endl;
		return (NULL);
	}
	return (newZ);
}
