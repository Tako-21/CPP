/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:11:26 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/20 19:36:51 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>

class Zombie {


public :

	Zombie( void );
	Zombie( std::string name );
	~Zombie( void );
	void	announce( void );
	void	setName( std::string name );
	int		&test( void );
	int a;

private : 
	std::string	_name;

};

Zombie* zombieHorde( int N, std::string name );

#endif /* __ZOMBIE_HPP__ */