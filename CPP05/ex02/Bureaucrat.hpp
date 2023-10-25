/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:59:03 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/25 14:12:39 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

# include "Aform.hpp"
# include <iostream>
# include <exception>

class Form;

class Bureaucrat {

public:

	/*----------Constructor/Copy Constructor/Destructor----------*/
	Bureaucrat( std::string name, int grade );
	~Bureaucrat();
	std::string	const	getName( void ) const ;
	unsigned int		getGrade( void ) const;
	void				incrementGrade( void );
	void				decrementGrade( void );
	void				setGrade( int grade );
	void				signForm( Form &form );

private:

	class GradeTooHighException : public std::exception
	{
		public :
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public  std::exception
	{
		public :
			virtual const char* what() const throw();
	};
	std::string	const	_name;
	unsigned int		_grade;
};

std::ostream&		operator<< ( std::ostream& stream, Bureaucrat const &fixed );


#endif /* __BUREAUCRAT_HPP__ */