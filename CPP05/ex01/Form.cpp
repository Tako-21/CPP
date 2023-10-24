/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:00:03 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/24 16:45:12 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( std::string name, unsigned int s_grade, unsigned int x_grade ) :
_name(name), _signed(false), _s_grade(s_grade), _x_grade(x_grade)
{

}

Form::~Form() {}

void		Form::setGrade( unsigned int grade )
{
	try {
		if ( grade < 1 ) {
			throw ( Form::GradeTooHighException() );
		}
		else if ( grade > 150 ) {
			throw ( Form::GradeTooLowException() );
		}
	}
	catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
		throw;
	}
}

bool	Form::beSigned( Bureaucrat& obj )
{
	try {
		if ( this->_signed == true )
			throw ( Form::AlreadySigned() );
		else if ( obj.getGrade() <= this->_s_grade)
			this->_signed = true;
		else
			throw ( Form::GradeTooLowException() );
	}
	catch ( std::exception &e ) {
		throw;
	}
	return ( this->_signed );
}

/*	Overload <what> exception	*/
const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too High");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low");
}


const char*	Form::AlreadySigned::what() const throw()
{
	return ("The form has already been signed");
}

/*	Getter	*/
unsigned int	Form::getXGrade( void )
{
	return ( this->_x_grade );
}

unsigned int	Form::getSGrade( void )
{
	return ( this->_s_grade );
}

bool			Form::getSigned( void )
{
	return ( this->_signed );
}

std::string		Form::getName( void )
{
	return ( this->_name );
}
