/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:56:44 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/24 16:44:24 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM__
#define __FORM__

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

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

public:

	/*	Constructor / Destructor	*/
	Form( std::string name, unsigned int s_grade, unsigned int x_grade );
	~Form();

	bool	beSigned( Bureaucrat& obj );
	
	/*	Setter						*/
	void			setGrade( unsigned int grade );

	/*	Getter						*/
	unsigned int	getXGrade( void );
	unsigned int	getSGrade( void );
	bool			getSigned( void );
	std::string		getName( void );
};

#endif /* __FORM__ */