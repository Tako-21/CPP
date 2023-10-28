/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:30:06 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/27 14:46:41 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"
# include "Aform.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern ( const Intern& cpy )
{
	*this = cpy;
}

Intern& Intern::operator= ( const Intern& cpy )
{
	(void)cpy;
	return *this;
}

Aform*	Intern::makeForm( std::string name, std::string target )
{
	Aform		*form;

	t_DataForm	data_form[4] = {
		{"shrubbery creation", form = new ShrubberyCreationForm(target)},
		{"robotomy request", form = new RobotomyRequestForm(target)},
		{"presidential pardon", form = new PresidentialPardonForm(target)},
		{"", NULL}
	};
	std::cout << "Intern creates " << target << std::endl;

	for ( int i = 0; data_form[i].form; i++ ) {
		if ( data_form[i].form_name == name ) {
			for ( int j = 0; data_form[j].form; j++ ) {
				if ( i != j )
					delete data_form[j].form;
			}
			return (data_form[i].form);
		}
	}
	for ( int i = 0; data_form[i].form; i++ ) {
		delete data_form[i].form;
	}
	std::cout << "Unable to create " << target << " " << name << " not found" << std::endl;
	return ( NULL );
}
