/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:03:05 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/14 20:35:35 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "action.hpp"
#include "PhoneBook.hpp"
#include "Contact.hpp"

#include <stdio.h>

MapAction	*initMapAction( void ) {
	static MapAction	map_action[4] = {
		{"ADD", addAction},
		{"SEARCH", searchAction},
		{"EXIT", exitAction},
		{"", NULL}
	};

	return (map_action);
}

int	isAction(MapAction *map_action, std::string user_input)
{
	int	i;

	i = 0;
	while (map_action[i].pf) {
		if (!map_action[i].action.compare(user_input))
			return (1);
		i++;
	}
	return (0);
}

void	getAction( void ) {

	MapAction	*map_action;

	map_action = initMapAction();
	int	i;

	i = 0;
	std::string	user_input;

	std::cout << ("What do you want to do ? : ") << std::endl;
	std::cin >> user_input;
	isAction (map_action, user_input);
	while (!isAction(map_action, user_input))
	{
		std::cout << ("Incorrect input") << std::endl;
		std::cout << ("You have the choice between") << std::endl;
		std::cout << ("-ADD") << std::endl;
		std::cout << ("-SEARCH") << std::endl;
		std::cout << ("-EXIT") << std::endl << std::endl;
		std::cout << ("What's your choice ? : ") << std::endl;
		std::cin >> user_input;
		std::cout << std::endl;
		i++;
	}
}

int	displayWelcome( void )
{
	std::cout << ("Welcome to the PhoneBook !") << std::endl << std::endl;
	std::cout << ("You can :") << std::endl;
	std::cout << ("-ADD (save a new contact)") << std::endl;
	std::cout << ("-SEARCH (display a specific contact)") << std::endl;
	std::cout << ("-EXIT (leave the program)") << std::endl << std::endl;

	return (21);
}

int	main(void)
{
	displayWelcome();
	getAction();

	return (21);
}
