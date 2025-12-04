/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 12:13:44 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/03 14:57:52 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
	public:
		Zombie( std::string );
		Zombie( void );
		~Zombie( void );
		
		void			announce( void );
		void			setName(std::string);
		std::string		getName( void ) const;

	private:
		std::string	_name;

};

Zombie	*zombieHorde( int N, std::string name);

#endif