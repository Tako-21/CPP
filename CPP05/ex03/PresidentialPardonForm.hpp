/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:23:18 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/25 19:02:19 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM__
#define __PRESIDENTIALPARDONFORM__


#include "Aform.hpp"

class PresidentialPardonForm : public Aform
{

public:

	PresidentialPardonForm( std::string name );
	~PresidentialPardonForm();
	PresidentialPardonForm ( const PresidentialPardonForm& cpy );
	PresidentialPardonForm& operator= ( const PresidentialPardonForm& cpy );

	void			execute(Bureaucrat const & executor) const;

private:
};

#endif /* __PRESIDENTIALPARDONFORM__ */