/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:03:05 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/18 19:45:42 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

#include <iomanip>
#include <stdio.h>

std::string truncate(std::string str, size_t width)
{
	if (str.length() > width)
		return str.substr(0, width) + ".";
	else
		return str;
}

int	main(void)
{
	int	i;

	i = 0;
	std::cout << std::endl << std::endl;
	std::cout << std::setw(10) << std::left << "|  INDEX  " << "|";
	std::cout << std::setw(10) << " FIRST NAME " << "|";
	std::cout << std::setw(10) << " LAST NAME " << "|";
	std::cout << std::setw(10) << " NICK NAME |" << std::endl;

	while (i < 7)
	{
		std::cout << "|";
		std::cout << "    " << "[" << i << "]";
		std::cout << std::setfill(' ') << std::setw(10) << std::right;
		std::cout << "|" << " ";
		std::cout << std::right << truncate("Momoooooo", 9);
		
		std::cout << std::setfill(' ') << std::setw(10) << std::right;
		std::cout << "|" << " ";
		std::cout << std::right << truncate("Laskooooooo", 9);
		
		std::cout << std::setfill(' ') << std::setw(10) << std::right;
		std::cout << "|" << " ";
		std::cout << std::right << truncate("Takoooooooooo", 9) << std::endl;
		i++;
	}
	// PhoneBook	phonebook;	
	return (21);
}
