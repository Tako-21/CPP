/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:52:29 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/13 19:59:59 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	PhoneBook::getx(void){
	this->name = "Salut";
	std::cout << this->name << std::endl;
	return (21);
}

PhoneBook::PhoneBook(int b1, char b2, std::string b3)
: a1(b1), a2(b2), a3(b3)
{
	std::cout << "Constructor Called" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor Called" << std::endl;
}
