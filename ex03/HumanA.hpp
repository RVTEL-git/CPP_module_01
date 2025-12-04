/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:23:04 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/03 17:57:26 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	public :

		HumanA( std::string name, Weapon &type );
		~HumanA( void );

		void		attack( void );
		void		setName(std::string name);
		std::string	getName( void ) const;

	private :
		std::string	_name;
		Weapon		&_weapon;
};

#endif