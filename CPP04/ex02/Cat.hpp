/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:41:03 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/14 12:59:51 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{

public:

	/*----------Constructor/Destructor/Copy Constructor----------*/
	Cat( void );
	~Cat( void );
	Cat ( const Cat &cpy );
	Cat& operator= ( const Cat &cpy );
	
	void		makeSound( void ) const;
	std::string	getType( void );

private:
	Brain*	_brain;

};

#endif /* __CAT_HPP__ */