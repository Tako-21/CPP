/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:23:20 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/25 18:53:21 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM__
#define __ROBOTOMYREQUESTFORM__

# include "Aform.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Aform
{

public:

	RobotomyRequestForm( std::string name );
	~RobotomyRequestForm();
	RobotomyRequestForm ( const RobotomyRequestForm& cpy );
	RobotomyRequestForm& operator= ( const RobotomyRequestForm& cpy );

	void	execute(Bureaucrat const & executor) const;

private:
};

#endif /* __ROBOTOMYREQUESTFORM__ */