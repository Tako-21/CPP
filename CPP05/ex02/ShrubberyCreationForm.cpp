/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:23:29 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/25 14:21:48 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include "Aform.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string name, unsigned int x_grade, unsigned int s_grade ) : Aform(name, s_grade, x_grade)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm::ShrubberyCreationForm ( const ShrubberyCreationForm& cpy ) :  Aform(cpy.getName(), cpy.getSGrade(), cpy.getXGrade())
{
	*this = cpy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= ( const ShrubberyCreationForm& cpy ) {
	return *this;
}
