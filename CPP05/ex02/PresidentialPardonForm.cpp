/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:15:18 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/25 19:16:39 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"
# include "Aform.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string name ) : Aform(name, 25, 5)
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

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
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
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
