/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:01:17 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/10 19:39:42 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"

# include <iostream>
# include <vector>
# include <iterator>


template <typename T> 
struct Addition 
{ 
	static void Accumuler(T& Resultat, const T& Valeur) 
	{ 
		Resultat += Valeur; 
	} 
};

template <typename T, typename Operation> 
T Accumulation(const T* Debut, const T* Fin) 
{ 
	T Resultat = 0; 
	for ( ; Debut < Fin; ++Debut) 
		Operation::Accumuler(Resultat, *Debut); 

	return Resultat; 
}

int	main( void )
{
	MutantStack<int> mstack;

	mstack.push(21);
	mstack.push(12);


	std::cout << mstack.top() << std::endl;

	int	tab[] = {0, 1, 2, 3, 4};
	

	std::cout << Accumulation<int, Addition<int> >(tab, tab + 5) << std::endl;
	// mstack.displayStack();
	// MutantStack<int>::it t;
	// MutantStack<int>::	
	// mstack.push(21);

	// MutantStack<int>::iterator it = mstack.begin();

	// MutantStack<int> mstack;
	// mstack.push(5);
	// mstack.push(17);
	// std::cout << mstack.top() << std::endl;
	// mstack.pop();
	// std::cout << mstack.size() << std::endl;
	// mstack.push(3);
	// mstack.push(5);
	// mstack.push(737);
	// //[...]
	// mstack.push(0);
	// MutantStack<int>::iterator it = mstack.begin();
	// MutantStack<int>::iterator ite = mstack.end();
	// ++it;
	// --it;
	// while (it != ite)
	// {
	// 	std::cout << *it << std::endl;
	// 	++it;
	// }
	// std::stack<int> s(mstack);
}