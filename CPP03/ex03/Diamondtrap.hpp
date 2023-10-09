/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diamondtrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:28:51 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/09 19:17:32 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__

#include "Scavtrap.hpp"
#include "Fragtrap.hpp"

class Diamondtrap : public Fragtrap, public Scavtrap
{

public:

	/*--------------Constructor/Destructor/Copy Constructor--------------*/
	Diamondtrap( std::string name );
	~Diamondtrap( void );
	Diamondtrap&	operator= (const Diamondtrap &obj);
	Diamondtrap(const Diamondtrap& obj);

	using Scavtrap::attack;
	void	whoAmI();

private:

	std::string	_name;
};

#endif /* __DIAMONDTRAP_HPP__ */