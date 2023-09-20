/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:11:26 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/20 12:52:16 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>

class Zombie {


public :

	Zombie(std::string name);
	~Zombie( void );
	void	announce( void );
private : 

	std::string	_name;
};


Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif /* __ZOMBIE_HPP__ */