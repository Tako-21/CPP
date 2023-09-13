/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:35:45 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/13 19:59:34 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook {
public :
	int const a1;
	char	a2;
	std::string a3;

	PhoneBook(int b1, char b2, std::string b3);
	~PhoneBook(void);
	int	x;
	int	getx(void);
private :
	std::string name;
};

#endif