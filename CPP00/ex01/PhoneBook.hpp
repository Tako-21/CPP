/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:35:45 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/29 17:45:23 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <functional>

#include "Contact.hpp"

# define MAXIMUM_CONTACTS 8

class PhoneBook {
	public :
		PhoneBook( int nbContacts );
		~PhoneBook( void );
		void	addAction( int *i );
		void	searchAction( void );
		void	getAction( void );
		bool	displayContacts( void ) const;
		void	displayWelcome( void ) const;
		void	displayIndex( int index ) const;
		void	setNbContacts( void );
		int		getNbContacts( void ) const;
	private :
		Contact	_contacts[8];
		int		_nbContacts;
};

#endif