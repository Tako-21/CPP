/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:17:18 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/20 16:14:59 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name ) {

	Zombie*	zombie = new Zombie[N];
	
	for (int i = 0; i < N; i++) {
		zombie[i].setName(name);
	}

	return (zombie);
}