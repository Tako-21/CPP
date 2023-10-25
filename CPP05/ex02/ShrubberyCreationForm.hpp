/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:22:52 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/25 14:23:50 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM__
#define __SHRUBBERYCREATIONFORM__

# include "Aform.hpp"

class ShrubberyCreationForm : public  Aform
{

public:

	ShrubberyCreationForm( std::string name, unsigned int x_grade, unsigned int s_grade );
	~ShrubberyCreationForm();
	ShrubberyCreationForm ( const ShrubberyCreationForm& cpy );
	ShrubberyCreationForm& operator= ( const ShrubberyCreationForm& cpy );

private:
};

#endif /* __SHRUBBERYCREATIONFORM__ */