/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aform.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:34:59 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/25 19:12:57 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Aform.hpp"
# include <iostream>

Aform::Aform( std::string name, unsigned int s_grade, unsigned int x_grade ) :
_name(name), _signed(false), _s_grade(s_grade), _x_grade(x_grade)
{
	checkGrade(s_grade);
	checkGrade(x_grade);
}

void	Aform::checkGrade( unsigned int grade )
{
	try {
		if ( grade < 1 ) {
			throw ( Aform::GradeTooHighException() );
		}
		else if ( grade > 150 ) {
			throw ( Aform::GradeTooLowException() );
		}
	}
	catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
		throw;
	}
}

unsigned int	Aform::getXGrade( void ) const
{
	return ( this->_x_grade );
}

unsigned int	Aform::getSGrade( void ) const
{
	return ( this->_s_grade );
}

bool			Aform::getSigned( void ) const
{
	return ( this->_signed );
}

std::string		Aform::getName( void ) const
{
	return ( this->_name );
}

bool	Aform::beSigned( Bureaucrat& obj )
{
	try {
		if ( this->_signed == true )
			throw ( Aform::AlreadySigned() );
		else if ( obj.getGrade() <= this->_s_grade) {
			this->_signed = true;
		}
		else
			throw ( Aform::GradeTooLowException() );
	}
	catch ( std::exception &e ) {
		throw;
	}
	return ( this->_signed );
}

/*	Overload <what> exception	*/
const char*	Aform::GradeTooHighException::what() const throw()
{
	return ("grade is too high");
}

const char*	Aform::GradeTooLowException::what() const throw()
{
	return ("grade is too low");
}

const char*	Aform::AlreadySigned::what() const throw()
{
	return ("the form has already been signed");
}

const char* Aform::IsNotSigned::what() const throw()
{
	return ("the form is not signed");
}