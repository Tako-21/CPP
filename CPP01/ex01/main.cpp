/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:10:42 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/01 15:08:24 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main( void ) {

	Zombie	*zombie;
	int		N;

	N = 3;
	zombie = zombieHorde(N, "kinooo");

	for (int i = 0; i < N; i++) {
		zombie[i].announce();
	}

	delete [] zombie;
}
