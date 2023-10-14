/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:36:11 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/12 19:18:03 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP__
#define __WRONGANIMAL_HPP__

# include <iostream>

class WrongAnimal {

protected:
	std::string _type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &copy);
	WrongAnimal &operator= (const WrongAnimal &cpy);
	virtual ~WrongAnimal();
	void makeSound() const;
	std::string	getType( void ) const;
};

#endif /* __WRONGANIMAL_HPP__ */