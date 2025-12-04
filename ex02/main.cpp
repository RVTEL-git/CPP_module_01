/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:24:06 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/04 09:13:43 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*strPTR = &str;
	std::string	&strREF = str;

	std::cout << "The address of str is:		" << &str << std::endl;
	std::cout << "The address of strPTR is:	" << &strPTR << std::endl;
	std::cout << "The address of strREF is:	" << &strREF << "\n" << std::endl;

	std::cout << str << std::endl;
	std::cout << *strPTR << std::endl;
	std::cout << strREF << std::endl;
	
	return (0);
}