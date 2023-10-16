/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:13:48 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/16 19:55:50 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "Character.hpp"
# include "ICharacter.hpp"
# include "IMateriaSource.hpp"
# include "MateriaSource.hpp"

int	main( void )
{
	// ICharacter* bob = new Character("bob");
	// Character	character("Lord Cesar");
	// AMateria*	materia = new Ice();

	// character.equip(materia);
	// character.use(0, *bob);
	// character.unequip(0);
	// delete materia;
	// delete bob;
	// materia = new Cure();
	// delete materia;

/*==================SECOND PART==================*/
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	Character* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
		

	ICharacter* bob = new Character("bob");
	me->use(-1, *bob);
	me->use(1, *bob);
	
	// me->unequip(0);
	me->use(0, *bob);

	Character	*cpy_me = new Character("me_cpy");

	*cpy_me = *me;

	std::cout << "===========================================" << std::endl;
	cpy_me->unequip(1);
	cpy_me->use(1, *bob);
	me->use(1, *bob);

	cpy_me->unequip(1);
	cpy_me->use(1, *bob);
	me->use(1, *bob);

	delete cpy_me;
	delete bob;
	delete me;
	delete src;

}