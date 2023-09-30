/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:07:25 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/30 21:29:31 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <fstream>

void	replace( char **argv )
{
	std::ifstream	infile (argv[1]);
	if ( !infile.is_open() )
	{
		std::cout << "Error while opening the file" << std::endl;
		return ;
	}
	
	std::string		occurence = argv[2];
	std::string		replaced = argv[3];
	std::string		line;
	std::string		filename = argv[1];
	filename.append(".replace");
	std::ofstream	outfile (filename.c_str());
	size_t			found;
	
	if ( std::getline(infile, line, '\0') )
	{
		found = line.find(occurence);
		while ( found != std::string::npos )
		{
			line.erase(found, occurence.length());
			line.insert(found, replaced);
			found = line.find(occurence);
		}
		outfile << line;
		infile.close();
		std::cout << "Another file was successfuly created !" << std::endl;
	}
	outfile.close();
}

int	main( int argc, char **argv )
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments." << std::endl;
		return (-1);
	}

	replace( argv );
}

