/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:28:48 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/26 11:53:42 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN__
#define __INTERN__

# include "Aform.hpp"

typedef struct	s_DataForm
{
	std::string	form_name;
	Aform*		form;
}				t_DataForm;

class Intern {

public:

	Intern( void );
	~Intern();
	Intern ( const Intern& cpy );
	Intern& operator= ( const Intern& cpy );

	Aform*	makeForm( std::string target, std::string name );
private:

};

#endif /* __INTERN__ */