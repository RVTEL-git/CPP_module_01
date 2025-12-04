/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:23:12 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/03 18:50:46 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	public :

		HumanB( std::string name);
		~HumanB( void );

		void		attack( void );
		std::string	getName(void) const;
		void		setWeapon( Weapon &weapon );
		bool		checkWeapon( void );

	private :
		std::string	_name;
		Weapon		*_weapon;
};

#endif