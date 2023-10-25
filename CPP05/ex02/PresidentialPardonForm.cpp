/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:15:18 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/25 14:49:12 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"
# include "Aform.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string name, unsigned int x_grade, unsigned int s_grade) : Aform(name, s_grade, x_grade)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm ( const PresidentialPardonForm& cpy ) : Aform(cpy.getName(), cpy.getSGrade(), cpy.getXGrade())
{
	*this = cpy;
}

PresidentialPardonForm& PresidentialPardonForm::operator= ( const PresidentialPardonForm& cpy )
{
	return *this;
}
