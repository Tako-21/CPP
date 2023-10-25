/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:00:03 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/25 13:10:28 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( std::string name, unsigned int s_grade, unsigned int x_grade ) :
_name(name), _signed(false), _s_grade(s_grade), _x_grade(x_grade)
{
	this->setGrade( s_grade );
	this->setGrade( x_grade );
	std::cout << "Succesfully created the form" << std::endl;
}

Form::~Form() {}


Form::Form( const Form& cpy ) : _name(cpy._name), _signed(cpy._signed), _s_grade(cpy._s_grade), _x_grade(cpy._x_grade)
{
	std::cout << "Copy completed succesfully with copy constructor" << std::endl;
}

Form&	Form::operator= ( const Form& cpy )
{
	this->_signed = cpy._signed;
	std::cout << "Copy completed successfully with copy assignment operator" << std::endl;
	
	return ( *this );
}

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
	return ("grade is too high");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("grade is too low");
}


const char*	Form::AlreadySigned::what() const throw()
{
	return ("the form has already been signed");
}

/*	Getter	*/
unsigned int	Form::getXGrade( void ) const
{
	return ( this->_x_grade );
}

unsigned int	Form::getSGrade( void ) const
{
	return ( this->_s_grade );
}

bool			Form::getSigned( void ) const
{
	return ( this->_signed );
}

std::string		Form::getName( void ) const
{
	return ( this->_name );
}

std::ostream&	operator<< (std::ostream& stream, Form const & form)
{
	return ( stream << "Is the form signed ? : " << (form.getSigned() ? "Yes" : "No") << std::endl
					<< "Name                 : " << form.getName() << std::endl
					<< "xGrade               : " << form.getXGrade() << std::endl
					<< "sGrade               : " << form.getSGrade() << std::endl );
}
