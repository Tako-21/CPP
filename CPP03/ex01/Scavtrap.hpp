/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:26:37 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/09 14:43:22 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include "Claptrap.hpp"

class Scavtrap : public Claptrap
{

public:

	/*------------Constructor/Destructor------------*/
	Scavtrap( std::string name );
	~Scavtrap( void );

	void guardGate();	

private:

	std::string _name;
};

#endif /* __SCAVTRAP_HPP__ */