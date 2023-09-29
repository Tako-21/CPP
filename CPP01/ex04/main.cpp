/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:07:25 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/29 16:08:56 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <fstream>

# include "Sed.hpp"


int	main( int argc, char **argv )
{
	if (argc != 4)
	{
		std::cout << "Error" << std::endl;
		return (-1);
	}
	std::ifstream	infile (argv[1]);
	std::string		filename = argv[1];
	filename.append(".replace");
	std::ofstream	outfile (filename.c_str());

	Sed	sed( infile, outfile, argv[2], argv[3] );
}

