/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:47:10 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/12 19:21:14 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_HPP__
#define __WRONGCAT_HPP__

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public:

	WrongCat( void );
	virtual ~WrongCat( void );
	WrongCat(const WrongCat& cpy);
	WrongCat&	operator= (const WrongCat& cpy);
	void makeSound() const;
	std::string	getType( void ) const;

protected:
	std::string _type;

};

#endif /* __WRONGCAT_HPP__ */