/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:08:07 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/25 12:02:48 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include <cstdlib>
# include <csignal>


void	func( void )
{
	std::cout << "Houston We Got It" << std::endl;
	exit (SIGABRT);
}

int	main( void )
{
	/*	func is now the new global terminate handler function*/
	std::set_terminate(func);
	/*	Low Grade	*/
	/*	Without the try block we get an IOT Instruction called by std::abort	*/
	try {
		Bureaucrat	obj("Bob", -1);
	}
	catch (std::exception &e) {
	}
	/*	High Grade	*/
	try {
		Bureaucrat	obj("Bob", 151);
	}
	catch (std::exception &e) { 
	}

	// Bureaucrat	obj("Bob", 151);
	
	/*	Increment and Decrement Grade : same way a try block is needed otherwise std::terminate will be called  */
	Bureaucrat		obj1("Bob", 149);
	Bureaucrat		obj2("Tom", 2);
	
	obj1.decrementGrade();
	std::cout << obj1 << std::endl;
	// obj1.decrementGrade();			//	An error will occur here.
	
	obj2.incrementGrade();				//	An error will occur here.
	std::cout << obj2 << std::endl;
	// obj2.incrementGrade();
}