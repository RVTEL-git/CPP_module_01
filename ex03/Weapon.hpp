/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:23:21 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/03 18:15:58 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPONS_HPP
#define WEAPONS_HPP

#include <string>

class Weapon {
	public:

		Weapon( std::string const type );
		~Weapon ( void );

		std::string const	&getType( void ) const;
		void				setType( std::string const &type);

		private:

			std::string	_type;

};


#endif