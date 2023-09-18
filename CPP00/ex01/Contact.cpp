/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:39:11 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/18 13:57:30 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void ) {
	// std::cout << "Constructor Called" << std::endl;
	Contact::_nbInst++;
}

Contact::~Contact( void ) {
	// std::cout << "Destructor Called" << std::endl;
}

void Contact::setFirstName( std::string firstname ) {
	this->_firstname = firstname;
}

void Contact::setLastName( std::string lastname ) {
	this->_lastname = lastname;
}

void Contact::setNickName( std::string nickname ) {
	this->_nickname = nickname;
}

void Contact::setPhoneNumber( int phonenumber ) {
	this->_phonenumber = phonenumber;
}

void Contact::setDarkestSecret( std::string darkest_secret ) {
	this->_darkest_secret = darkest_secret;
}

std::string	Contact::getFirstName( void ) const {
	return (this->_firstname);
}

std::string	Contact::getLastName( void ) const {
	return (this->_lastname);
}

std::string	Contact::getNickName( void ) const {
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber( void ) const {
	return (this->_phonenumber);
}

std::string	Contact::getDarkestSecret( void ) const {
	return (this->_darkest_secret);
}

int		Contact::getNbInst( void ) {
	return Contact::_nbInst;
}

int	Contact::_nbInst = 0;