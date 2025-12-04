/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:13:05 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/03 15:07:46 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie	*zombieHorde( int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	if (!horde)
		return (NULL);
	for (int i = 0 ; i < N ; i++)
	{
		horde[i].setName(name);
	}
	
		
	return (horde);
}