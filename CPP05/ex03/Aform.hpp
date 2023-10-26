/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aform.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:22:10 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/25 17:14:46 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AFORM__
#define __AFORM__

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Aform {

public:

	Aform( std::string name, unsigned int s_grade, unsigned int x_grade );
	virtual ~Aform() {}

	virtual void			execute( Bureaucrat const & executor ) const = 0;

	virtual bool			beSigned( Bureaucrat& obj );
	/*	Setter						*/
	virtual void			checkGrade( unsigned int grade );

	/*	Getter						*/
	virtual unsigned int	getXGrade( void ) const;
	virtual unsigned int	getSGrade( void ) const;
	virtual bool			getSigned( void ) const;
	virtual std::string		getName( void ) const;

	/*--------Exceptions handling-----------------------*/
	class GradeTooLowException : public std::exception
	{
		public :
			virtual const char* what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
		public :
			virtual const char* what() const throw();
	};

	class AlreadySigned : public std::exception
	{
		public :
			virtual const char* what() const throw();
	};

	class IsNotSigned : public std::exception
	{
		public :
			virtual const char* what() const throw();
	};

private:

	std::string const	_name ;
	bool				_signed;
	unsigned int const	_s_grade;
	unsigned int const	_x_grade;

};


std::ostream&	operator<< (std::ostream&, Aform const & form);

#endif /* __AFORM__ */