/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:50:50 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/10 16:25:48 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main( void )
{
	/* =============================== ANIMAL TEST =============================== */
	
	std::cout << std::endl << BOLDMAGENTA << "----- ANIMAL -----" << RESET << std::endl << std::endl;
	std::cout << BOLDGREEN << "Constructor : " << RESET << std::endl;
	const Animal *meta = new Animal();

	std::cout << std::endl << BOLDWHITE << "Call of getType   : " << RESET << meta->getType() << std::endl;
	
    std::cout << BOLDWHITE << "Call of makeSound : " << RESET;
    meta->makeSound();
    
    std::cout << std::endl << BOLDRED << "Destructor : " << RESET << std::endl;
    delete meta;

	/* =============================== DOG TEST =============================== */

	std::cout << std::endl << BOLDYELLOW << "----- DOG -----" << RESET << std::endl << std::endl;
	std::cout << GREEN << "Constructor : " << RESET << std::endl;
	const Animal *dog = new Dog();

	std::cout << std::endl << BOLDWHITE << "Call of getType   : " << RESET << dog->getType() << std::endl;

	std::cout << BOLDWHITE << "Call of makeSound : " << RESET;
	dog->makeSound();

	std::cout << std::endl << BOLDRED << "Destructor : " << RESET << std::endl;
	delete dog;

	// /* =============================== CAT TEST =============================== */
	
    // std::cout << std::endl << BOLDCYAN << "----- CAT -----" << std::endl << std::endl;
    // std::cout << GREEN << "Constructor : " << RESET << std::endl;
    // const Animal *cat = new Cat();
    
    // std::cout << std::endl << BOLDWHITE << "Call of getType   : " << RESET << cat->getType() << std::endl;
    
    // std::cout << BOLDWHITE << "Call of makeSound : " << RESET;
    // cat->makeSound();
    
    // std::cout << std::endl << BOLDRED << "Destructor : " << RESET << std::endl;
    // delete cat;

	// /* =============================== WRONG ANIMAL TEST =============================== */

    // std::cout << std::endl << BOLDMAGENTA  "----- WRONG ANIMAL -----" << std::endl << std::endl;
    // std::cout << GREEN << "Constructor : " << RESET << std::endl;
    // const WrongAnimal *wani = new WrongAnimal();
    
    // std::cout << std::endl << BOLDWHITE << "Call of getType   : " << RESET << wani->getType() << std::endl;
    
    // std::cout << BOLDWHITE << "Call of makeSound : " << RESET;
    // wani->makeSound();
    
    // std::cout << std::endl << BOLDRED << "Destructor : " << RESET << std::endl;
    // delete wani;

	// /* =============================== WRONG CAT TEST =============================== */
	
    // std::cout << std::endl << BOLDCYAN << "----- WRONG CAT -----" << std::endl << std::endl;
    // std::cout << GREEN << "Constructor : " << RESET << std::endl;
    // const WrongAnimal *w_cat = new WrongCat();
    
    // std::cout << std::endl << BOLDWHITE << "Call of getType   : " << RESET << w_cat->getType() << std::endl;
    
    // std::cout << BOLDWHITE << "Call of makeSound : " << RESET;
    // w_cat->makeSound();
    
    // std::cout << std::endl << BOLDRED << "Destructor : " << RESET << std::endl;
    // delete w_cat;

	return 0; 
}