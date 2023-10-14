/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:14:30 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/13 15:06:13 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <iostream>

class Brain {

public:

	Brain( void );
	~Brain( void );
	Brain& operator= ( const Brain& cpy );
	Brain( const Brain& cpy);

private:

	std::string	ideas[100];
};

#endif /* __BRAIN_HPP__ */