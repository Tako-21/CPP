/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:52:29 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/18 19:35:12 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <ios>
#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook( void )
{
	this->displayWelcome();
	this->getAction();
	// std::cout << "Constructor Called" << std::endl;
}

PhoneBook::~PhoneBook( void )
{
	// std::cout << "Destructor Called" << std::endl;
}

void	PhoneBook::getAction( void ) {
	std::string	user_input;
	
	while (user_input.compare("EXIT"))
	{
		std::cout << ("What do you want to do ? : ") << std::endl;
		std::cin >> user_input;
		if (!user_input.compare("ADD"))
			this->addAction();
		else if (!user_input.compare("SEARCH"))
			this->searchAction();
		else
		{
			std::cout << std::endl << ("Incorrect input") << std::endl;
			std::cout << ("You have the choice between") << std::endl;
			std::cout << ("-ADD") << std::endl;
			std::cout << ("-SEARCH") << std::endl;
			std::cout << ("-EXIT") << std::endl << std::endl;
		}
	}
}

void	PhoneBook::addAction( void )
{
	int	i;

	i = 0;
	std::string	tmp;
	int	phonenumber;

	std::cout << ("What's your name ? ") << std::endl;
	std::cin >> tmp;
	_contacts[i].setFirstName(tmp);
	
	std::cout << ("What's your last name ?") << std::endl;
	std::cin >> tmp;
	_contacts[i].setLastName(tmp);
	
	std::cout << ("What's your nickname ?") << std::endl;
	std::cin >> tmp;
	_contacts[i].setNickName(tmp);
	
	std::cout << ("What's the phone number ?") << std::endl;
	std::cin >> phonenumber;
	_contacts[i].setPhoneNumber(phonenumber);
	
	std::cout << ("What's your darkest secret ?") << std::endl;
	std::cin >> tmp;
	_contacts[i].setDarkestSecret(tmp);

	std::cout << "Contact have been successfully added" << std::endl;
	std::cout << "Back to main menu" << std::endl;
	std::cout << _contacts[i].getFirstName() << std::endl;
	// phonebook.contacts[0] = contact;
	// std::cout << phonebook.contacts[0].getFirstName();
}

// std::string truncate(std::string str, size_t width)
// {
// 	if (str.length() > width)
// 		return str.substr(0, width) + ".";
// 	else
// 		return str;
// }

void	PhoneBook::displayContact( void ) const
{
	int	i;

	i = 0;
	// std::cout << std::endl << std::endl;
	// std::cout << std::setw(10) << std::left << "|  INDEX  " << "|";
	// std::cout << std::setw(10) << " FIRST NAME " << "|";
	// std::cout << std::setw(10) << " LAST NAME " << "|";
	// std::cout << std::setw(10) << " NICK NAME |" << std::endl;

	// while (i < 7)
	// {
	// 	std::cout << "    " << "[" << i << "]";
	// 	std::cout << "   ";
	// 	// std::cout << std::setw(10);
	// 	std::cout << "| " << std::right << truncate(this->_contacts[i].getFirstName(), 9);
	// 	std::cout << std::setfill (' ') << std::setw(10);
	// 	std::cout << "| " << std::right << truncate(this->_contacts[i].getLastName(), 9);
	// 	std::cout << std::setfill (' ') << std::setw(10);
	// 	std::cout << "| " << std::right << truncate(this->_contacts[i].getNickName(), 9) << std::endl;
	// 	std::cout << " |";
	// 	i++;
	// }

}

void	PhoneBook::searchAction( void )
{
	int	index;

	index = 0;
	this->displayContact();
	std::cout << std::endl;
	while (true) 	
	{
		std::cout << "What's the index of the entry that you would want to display" << std::endl;
		if (!(std::cin >> index)) {
			std::cout << std::endl << "Incorrect input" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
			break ;	
	}
}

void	PhoneBook::displayWelcome( void ) const {
	std::cout << ("Welcome to the PhoneBook !") << std::endl << std::endl;
	std::cout << ("You can :") << std::endl;
	std::cout << ("-ADD (save a new contact)") << std::endl;
	std::cout << ("-SEARCH (display a specific contact)") << std::endl;
	std::cout << ("-EXIT (leave the program)") << std::endl << std::endl;
}