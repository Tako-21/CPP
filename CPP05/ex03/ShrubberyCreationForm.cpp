/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:23:29 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/26 11:50:42 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Aform.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Aform(target, 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy) : Aform(cpy.getName(), cpy.getSGrade(), cpy.getXGrade())
{
	*this = cpy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cpy)
{
	(void)cpy;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
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

	static bool append = false;

	std::ofstream ofs;

	if (!append) {
		ofs.open(this->getName().append("_shrubbery").c_str());
		append = true;
	}
	else
		ofs.open(this->getName().append("_shrubbery").c_str(), ofs.app);
	if (!ofs.is_open())
		return;

	ofs << "              \\ /" << std::endl;
	ofs << "            -->*<--" << std::endl;
	ofs << "              /_\\" << std::endl;
	ofs << "             /_\\_\\" << std::endl;
	ofs << "            /_/_/_\\" << std::endl;
	ofs << "           /_\\_\\_\\_\\" << std::endl;
	ofs << "          /_/_/_/_/_\\" << std::endl;
	ofs << "         /_\\_\\_\\_\\_\\_\\" << std::endl;
	ofs << "        /_/_/_/_/_/_/_\\" << std::endl;
	ofs << "       /_\\_\\_\\_\\_\\_\\_\\_\\" << std::endl;
	ofs << "      /_/_/_/_/_/_/_/_/_\\" << std::endl;
	ofs << "     /_\\_\\_\\_\\_\\_\\_\\_\\_\\_\\" << std::endl;
	ofs << "    /_/_/_/_/_/_/_/_/_/_/_\\" << std::endl;
	ofs << "             [___]" << std::endl
		<< std::endl;

	ofs.close();
}
