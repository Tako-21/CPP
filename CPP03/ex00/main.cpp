/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:20:19 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/09 13:34:22 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

int	main( void )
{
	Claptrap	obj1("ClapClap");
	
	obj1.attack("Hey");
	obj1.attack("Hey");
	obj1.attack("Hey");
	obj1.beRepaired(2);
	obj1.attack("Hey");
}