/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:14:37 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/28 19:01:28 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base * generate(void)
{
	int	rnd;

	srand(time(NULL));
	rnd = rand() % 3 + 1;
	
	switch (rnd) {
		case 0:
			return (new A());
		case 1:
			return (new B());		
		case 2:
			return (new C());
		default:
			break;
	}
	return ( NULL );
}

void identify(Base* p)
{
	if ( dynamic_cast<A*>(p) )
		std::cout << "A is the actual type pointed by p" << std::endl;
	else if ( dynamic_cast<B*>(p) )
		std::cout << "B is the actual type pointed by p" << std::endl;
	else if ( dynamic_cast<C*>(p) )
		std::cout << "C is the actual type pointed by p" << std::endl;
}

void identify(Base& p)
{
	try {
		p = dynamic_cast<A &>(p);
		std::cout << "A is the actual type pointed by p" << std::endl;
	}
	catch ( std::exception& e ) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		p = dynamic_cast<B &>(p);
		std::cout << "B is the actual type pointed by p" << std::endl;
	}
	catch ( std::exception& e ) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		p = dynamic_cast<C &>(p);
		std::cout << "C is the actual type pointed by p" << std::endl;
	}
	catch ( std::exception& e ) {
		std::cout << e.what() << std::endl;
	}
}
