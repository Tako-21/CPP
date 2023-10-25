/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:13:48 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/17 10:41:44 by mmeguedm         ###   ########.fr       */
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
/*=================MANDATORY PART=========================*/
	MateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

/*==================UNEQUIP PART==========================*/
	ICharacter* bob2 = new Character("bob2");
	AMateria*	materia = new Ice();
	Character	character("Lord Cesar");

	character.equip(materia);
	character.use(0, *bob2);
	character.unequip(0);
	delete bob2;

/*==================COPY ASSIGNMENT PART==================*/
	ICharacter* bob3 = new Character("bob3");
	IMateriaSource* src2 = new MateriaSource();
	src2->learnMateria(new Ice());
	src2->learnMateria(new Cure());
	
	Character* me2 = new Character("me2");
	
	AMateria* tmp2;
	tmp2 = src2->createMateria("ice");
	me2->equip(tmp2);
	tmp2 = src2->createMateria("cure");
	me2->equip(tmp2);
		

	me2->use(-1, *bob3);
	me2->use(1, *bob3);
	me2->use(0, *bob3);

	Character	*cpy_me = new Character("me_cpy");

	me2->equip( new Ice() );
	
	*cpy_me = *me2;

	std::cout << "===========================================" << std::endl;
	cpy_me->unequip(1);
	cpy_me->use(1, *bob3);
	me2->use(1, *bob3);

	cpy_me->unequip(1);
	cpy_me->use(1, *bob3);
	me2->use(1, *bob3);

	delete cpy_me;
	delete bob3;
	delete me2;
	delete src2;

}