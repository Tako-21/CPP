/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:01:17 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/13 17:20:36 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"

# include <iostream>
# include <vector>
# include <iterator>

int	main( void )
{
	//	Vector test
	std::cout << "VECTOR TEST" << std::endl;
	MutantStack<int, std::vector<int> >	vector;
	
	vector.push(1);
	vector.push(2);
	vector.push(3);
	vector.push(4);


	
	MutantStack<int, std::vector<int> >::iterator	it_vec = vector.begin();
	MutantStack<int, std::vector<int> >::const_iterator end_vec = vector.end();

	for (; it_vec != end_vec; it_vec++) {
		std::cout << *it_vec << std::endl;
	}

	//	Deque Test
	std::cout << "DEQUE TEST" << std::endl;
	MutantStack<int, std::deque<int> >	deque;
	
	deque.push(1);
	deque.push(2);
	deque.push(3);
	deque.push(4);


	
	MutantStack<int, std::deque<int> >::iterator	it_que = deque.begin();
	MutantStack<int, std::deque<int> >::const_iterator end_que = deque.end();

	for (; it_que != end_que; it_que++) {
		std::cout << *it_que << std::endl;
	}

	//	Mandatory test
	std::cout << "MANDATORY TEST" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(21);
	MutantStack<int>::iterator it1 = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it1;
	--it1;
	while (it1 != ite)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
	std::stack<int> s(mstack);
	
	std::cout << s.top() << std::endl;


	return 0;
}