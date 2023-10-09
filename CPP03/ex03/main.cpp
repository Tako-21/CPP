/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:20:19 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/09 18:25:30 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fragtrap.hpp"
#include "Diamondtrap.hpp"

int	main( void )
{
	Diamondtrap	obj("diamond");
	
	obj.attack("Fieeeew");	
	obj.whoAmI();
	// obj.highFivesGuys();
	// obj.attack("Morty");
}