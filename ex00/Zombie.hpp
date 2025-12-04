/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 10:43:07 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/03 11:26:01 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
	public:
		Zombie( std::string );
		~Zombie( void );
		
		void			announce( void );
		void			setName( std::string name);
		std::string		getName( void ) const;

	private:
		std::string	_name;

};

#endif