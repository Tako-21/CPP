/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:08:07 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/25 19:17:54 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Aform.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

int	main( void )
{
	Bureaucrat				bureaucrat("Straw", 149);
	// Aform*	berry  = new ShrubberyCreationForm("Berry");

	// bureaucrat.signForm(*berry);
	// std::cout << berry->getSigned() << std::endl;	

	// berry->execute(bureaucrat);
	// berry->execute(bureaucrat);

	RobotomyRequestForm	robot("Bender");
	PresidentialPardonForm	president("JFK");
	bureaucrat.signForm(robot);
	// robot.execute(bureaucrat);


	// president.execute(bureaucrat);
	bureaucrat.executeForm( robot );
}