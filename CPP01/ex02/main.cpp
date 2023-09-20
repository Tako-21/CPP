/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:19:43 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/20 17:16:28 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void ) {
	
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "addr_str : " << &str << std::endl;
	std::cout << "addr_ptr : " << stringPTR << std::endl;
	std::cout << "addr_ref : " << &stringREF << std::endl;

	std::cout << "value_str : " << str << std::endl;
	std::cout << "value_ptr : " << *stringPTR << std::endl;
	std::cout << "value_ref : " << stringREF << std::endl;
}