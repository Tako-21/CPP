/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:21:08 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/25 14:24:47 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"
# include "Aform.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string name, unsigned int x_grade, unsigned int s_grade ) : Aform(name, s_grade, x_grade)
{

}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm::RobotomyRequestForm ( const RobotomyRequestForm& cpy ) : Aform(cpy.getName(), cpy.getSGrade(), cpy.getXGrade())
{
	*this = cpy;
}

RobotomyRequestForm& RobotomyRequestForm::operator= ( const RobotomyRequestForm& cpy ) {
	return *this;
}
