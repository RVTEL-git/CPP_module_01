/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 06:14:26 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/04 07:23:07 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Harl
{
	public:
		Harl( void );
		~Harl( void );

		void	complain(std::string level);

	private:

		void	_debug( void );
		void	_info( void );
		void	_warning( void );
		void	_error( void );
};
