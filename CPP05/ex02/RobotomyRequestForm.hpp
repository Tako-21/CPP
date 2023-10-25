/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:23:20 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/25 14:25:02 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM__
#define __ROBOTOMYREQUESTFORM__

# include "Aform.hpp"

class RobotomyRequestForm : public Aform
{

public:

	RobotomyRequestForm( std::string name, unsigned int x_grade, unsigned int s_grade );
	~RobotomyRequestForm();
	RobotomyRequestForm ( const RobotomyRequestForm& cpy );
	RobotomyRequestForm& operator= ( const RobotomyRequestForm& cpy );

private:
};

#endif /* __ROBOTOMYREQUESTFORM__ */