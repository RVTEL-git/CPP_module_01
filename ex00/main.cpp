/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 10:42:21 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/03 19:28:52 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Utils.hpp"


int	main( void )
{
	Zombie	*newZ = newZombie("Jean");
	if (newZ) {
		newZ->announce();
		delete(newZ);
	}

	randomChump("Paul");
	return (0);
}
