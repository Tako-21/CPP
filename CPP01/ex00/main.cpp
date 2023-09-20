/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:10:42 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/20 14:31:29 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main( void ) {

	Zombie	*zombie = newZombie("Toteeen");
	randomChump("Kinooooooo");

	delete(zombie);
	
}
