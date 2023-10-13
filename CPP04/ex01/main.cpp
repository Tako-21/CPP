/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:18:53 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/13 19:42:58 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>
#include <stdlib.h>

int	main( void )
{	
	Animal*	animal_map[10];
	for ( int i = 0; i < 5; i++ ) {
		animal_map[i] = new Dog();
	}
	for ( int i = 5; i < 10; i++ ) {
		animal_map[i] = new Cat();
	}
	
	animal_map[0]->makeSound();	
	delete ( animal_map[0] );
	animal_map[0] = animal_map[6];
	animal_map[0]->makeSound();

	for ( int i = 1; i < 10; i++ ) {
		delete ( animal_map[i] );
	}
	return 0;
}