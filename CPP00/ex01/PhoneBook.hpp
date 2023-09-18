/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:35:45 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/18 17:10:08 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <functional>

#include "Contact.hpp"

class PhoneBook {
	public :
		PhoneBook( void );
		~PhoneBook( void );
		void	addAction( void );
		void	searchAction( void );
		void	getAction( void );
		void	displayContact( void ) const;
		void	displayWelcome( void ) const;
	private :
		Contact	_contacts[8];
};

#endif