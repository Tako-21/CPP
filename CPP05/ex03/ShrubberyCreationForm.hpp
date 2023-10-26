/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:22:52 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/25 18:24:57 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM__
#define __SHRUBBERYCREATIONFORM__

# include "Aform.hpp"

class ShrubberyCreationForm : public  Aform
{

public:

	ShrubberyCreationForm( std::string const & target );
	~ShrubberyCreationForm();
	ShrubberyCreationForm ( const ShrubberyCreationForm& cpy );
	ShrubberyCreationForm& operator= ( const ShrubberyCreationForm& cpy );

	void			execute(Bureaucrat const & executor) const;

private:
	// bool			beSigned( Bureaucrat& obj );
	
};

#endif /* __SHRUBBERYCREATIONFORM__ */