/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:21:08 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/26 11:50:29 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"
# include "Aform.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string name ) : Aform(name, 72, 45)
{

}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm::RobotomyRequestForm ( const RobotomyRequestForm& cpy ) : Aform(cpy.getName(), cpy.getSGrade(), cpy.getXGrade())
{
	*this = cpy;
}

RobotomyRequestForm& RobotomyRequestForm::operator= ( const RobotomyRequestForm& cpy ) {
	(void)cpy;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (!Aform::getSigned())
			throw(Aform::IsNotSigned());
		else if (executor.getGrade() >= Aform::getXGrade())
			throw(Aform::GradeTooLowException());
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		throw;
	}
	std::cout << "* some drilling noises *" << std::endl;
	std::cout	<< "The " << this->getName() << " has been robotomized "
				<< "successfully 50% of the time" << std::endl;
}