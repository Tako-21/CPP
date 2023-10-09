/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:53:03 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/09 19:12:41 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Fragtrap_HPP__
#define __Fragtrap_HPP__

#include "Scavtrap.hpp"

class Fragtrap : virtual public Claptrap
{

public:

	Fragtrap( std::string name );
	~Fragtrap( void );
	Fragtrap( void );
	Fragtrap&	operator= (const Fragtrap &obj);
	Fragtrap( const Fragtrap& obj );

	void highFivesGuys(void);

private:

};

#endif /* __Fragtrap_HPP__ */