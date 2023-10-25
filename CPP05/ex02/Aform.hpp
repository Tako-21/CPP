/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aform.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:22:10 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/25 14:38:22 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AFORM__
#define __AFORM__

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Aform {

public:

	Aform( std::string name, unsigned int s_grade, unsigned int x_grade );
	virtual ~Aform() {}

	virtual bool			beSigned( Bureaucrat& obj ) = 0;
	/*	Setter						*/
	virtual void			setGrade( unsigned int grade ) = 0;

	/*	Getter						*/
	virtual unsigned int	getXGrade( void ) const;
	virtual unsigned int	getSGrade( void ) const;
	virtual bool			getSigned( void ) const;
	virtual std::string		getName( void ) const;

private:

	std::string const	_name ;
	bool				_signed;
	unsigned int const	_s_grade;
	unsigned int const	_x_grade;

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
};


std::ostream&	operator<< (std::ostream&, Aform const & form);

#endif /* __AFORM__ */