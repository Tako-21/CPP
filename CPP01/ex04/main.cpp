/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:07:25 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/25 12:50:09 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <fstream>

# include "Sed.hpp"

int	main( int argc, char **argv )
{
	if (argc != 4)
		return (-1);

	std::string		filename = argv[1];
	filename.append(".replace");

	std::string		line;
	std::ifstream	const infile (argv[1]);
	std::ofstream	const outfile (filename);

	Sed	sed( infile, outfile, argv[2], argv[3] );
}
