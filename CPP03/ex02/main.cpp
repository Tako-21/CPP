/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:20:19 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/09 15:08:10 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fragtrap.hpp"

int	main( void )
{
	Fragtrap	obj("Fragtrap");
	
	obj.highFivesGuys();
	obj.attack("Morty");
}