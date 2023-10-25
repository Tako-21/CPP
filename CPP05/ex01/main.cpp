/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:08:07 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/25 14:48:47 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include <cstdlib>
# include <csignal>


/*	Since C++11 */
// void	func( void )
// {
// 	std::exception_ptr ep = std::current_exception();
	
// 	try {
// 		if ( ep ) {
// 			std::rethrow_exception(ep);
// 		}
// 	}
// 	catch ( const std::exception& e ) {
// 		std::cout << "Caught exception : " << e.what() << std::endl;
// 	}
// 	// if ( ep ) {

// 	// } 
// 	// std::cout << "Houston We Got It" << std::endl;
// 	exit (SIGABRT);
// }

void	func( void )
{
	std::cout << "Unhandled exception" << std::endl << "Aborted." << std::endl;
	// std::abort();
	exit(SIGABRT);
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
	catch ( std::exception &e ) {
	}

	// Bureaucrat	obj("Bob", 151);
	
	/*	Increment and Decrement Grade : same way a try block is needed otherwise std::terminate will be called  */
	

	// try {
	// 	// Form	form2("asd", -21, 42);
	// 	Form*	form0 = new Form("asd", -21, 42);
	// 	// form1(form2);
	// }
	// catch ( std::exception& e ) {
	// 	std::cout << "ERROR" << std::endl;
	// }
	
	/*	If an exception is thrown in the constructor, the object construction fails and the exception is
		caught by reference to base.
		Furthermore, as we create the object inside the try-block, his scope is limited to this one
		After the try-block, <form0> is undefined
	*/
	try {
		Form	form0("asd", 21, -42);
		std::cout << form0 << std::endl;
	}
	catch ( std::exception& e) {
	}
	Bureaucrat		obj1("Bob", 149);
	Bureaucrat		obj2("Tom", 2);
	
	// obj1.signForm(*form0);
	// delete form0;
	// Form			form1("form1", -1, 150);
	Form			form2("form2", 10, 10);


	obj1.decrementGrade();
	std::cout << obj1 << std::endl;
	// obj1.decrementGrade();			//	An error will occur here.
	
	obj2.incrementGrade();				//	An error will occur here.
	std::cout << obj2 << std::endl;
	// obj2.incrementGrade();

	// obj2.signForm(form1);
	// obj2.signForm(form1);
	// obj1.signForm(form1);
	// obj1.signForm(form2);
	// std::cout << form1 << std::endl;
}