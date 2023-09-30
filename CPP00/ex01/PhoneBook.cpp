/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:52:29 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/30 18:28:11 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <ios>
#include "PhoneBook.hpp"
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook( int nbContacts ) :
_nbContacts(nbContacts) {
	this->displayWelcome();
	this->getAction();
}

PhoneBook::~PhoneBook( void ){}

void	PhoneBook::addAction( int *i )
{
	std::string	tmp;

	if (*i == MAXIMUM_CONTACTS) {
		std::cout << std::endl	<< "Warning : The maximum of contacts has been reached" << std::endl
								<< "The oldest contact will be remplaced by the new one" << std::endl << std::endl;
		this->_nbContacts--;
		*i = 0;
	}
	std::cout << ("What's your name ? ") << std::endl;
	if (!(std::cin >> tmp))
		exit(-1);
	_contacts[*i].setFirstName(tmp);
	
	std::cout << ("What's your last name ?") << std::endl;
	if (!(std::cin >> tmp))
		exit(-1);
	_contacts[*i].setLastName(tmp);
	
	std::cout << ("What's your nickname ?") << std::endl;
	if (!(std::cin >> tmp))
		exit(-1);
	_contacts[*i].setNickName(tmp);

	std::cout << ("What's the phone number ?") << std::endl;
	if (!(std::cin >> tmp))
		exit(-1);
	_contacts[*i].setPhoneNumber(tmp);
	std::cout << ("What's your darkest secret ?") << std::endl;
	if (!(std::cin >> tmp))
		exit(-1);
	_contacts[*i].setDarkestSecret(tmp);

	std::cout << std::endl <<  "Contact have been successfully added" << std::endl;
	std::cout << "Back to main menu" << std::endl << std::endl;
	if (this->_nbContacts != MAXIMUM_CONTACTS)
		this->setNbContacts();
	std::cout << "nbContacts : " << _nbContacts << std::endl;
	(*i)++;
}

void	PhoneBook::getAction( void ) {
	int			i;
	std::string	user_input;
	
	i = 0;
	while (true)
	{
		std::cout << ("What do you want to do ? : ") << std::endl;
		if (!(std::cin >> user_input))
			exit(-1);
		if (!user_input.compare("ADD"))
			this->addAction(&i);
		else if (!user_input.compare("SEARCH"))
			this->searchAction();
		else if (!user_input.compare("EXIT"))
			break ;
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

std::string truncate(std::string str, size_t width)
{
	if (str.length() > width)
		return str.substr(0, width) + ".";
	else
		return str;
}

bool	PhoneBook::displayContacts( void ) const
{
	int	i;

	i = 0;
	if (!this->_nbContacts)
	{
		std::cout	<< std::endl
					<< "No contact has been added yet." << std::endl
					<< "You can save a contact with the command \"ADD\"." << std::endl << std::endl; 
		return (false);
	}
	std::cout << std::endl << std::endl;
	std::cout << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setw(10) << "NICK NAME" << "|" << std::endl;

	while (i < this->_nbContacts)
	{
		std::cout << std::setw(8) << "[" << i + 1 << "]" "|";
		std::cout << std::setw(10) << truncate(this->_contacts[i].getFirstName(), 9) << "|";
		std::cout << std::setw(10) << truncate(this->_contacts[i].getLastName(), 9) << "|";		
		std::cout << std::setw(10) << truncate(this->_contacts[i].getNickName(), 9) << "|" << std::endl;
		i++;
	}
	return (true);
}

void	PhoneBook::displayIndex( int index ) const {
	std::cout << "First Name     : " << this->_contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name      : " << this->_contacts[index].getLastName() << std::endl;
	std::cout << "Nick Name      : " << this->_contacts[index].getNickName() << std::endl;
	std::cout << "Phone Number   : " << this->_contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret : " << this->_contacts[index].getDarkestSecret() << std::endl << std::endl;
}

void	PhoneBook::searchAction( void )
{
	std::string	index_str;
	int			index;
	
	if (!this->displayContacts())
		return ;
	std::cout << std::endl;
	while (true)
	{
		std::cout << "What's the index of the entry that you would want to display" << std::endl;
		if (!(std::cin >> index_str))
			exit(-1);
		index = atoi(index_str.c_str());
		if (index <= 0 || index > this->_nbContacts)
			std::cout << "Index out of range" << std::endl;
		else
			break ;	
	}
	this->displayIndex( index - 1 );
}

void	PhoneBook::displayWelcome( void ) const {
	std::cout << ("Welcome to the PhoneBook !") << std::endl << std::endl;
	std::cout << ("You can :") << std::endl;
	std::cout << ("-ADD (save a new contact)") << std::endl;
	std::cout << ("-SEARCH (display a specific contact)") << std::endl;
	std::cout << ("-EXIT (leave the program)") << std::endl << std::endl;
}

void	PhoneBook::setNbContacts( void ) {
	this->_nbContacts++;
}

int	PhoneBook::getNbContacts( void ) const {
	return  (this->_nbContacts);
}

