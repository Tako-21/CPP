/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:26:37 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/09 19:13:33 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include "Claptrap.hpp"

class Scavtrap : virtual public Claptrap
{

public:

	/*------------Constructor/Destructor------------*/
	Scavtrap( std::string name );
	Scavtrap( void );
	~Scavtrap( void );
	Scavtrap&	operator= (const Scavtrap &obj);
	Scavtrap( const Scavtrap& obj );

	void	guardGate();	
	void	attack( const std::string& target );

protected:

	std::string _name;
};

#endif /* __SCAVTRAP_HPP__ */