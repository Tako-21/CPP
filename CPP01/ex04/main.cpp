/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:07:25 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/21 17:37:37 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <string>

int	main( void )
{
	std::ifstream	infile ("file");
	std::ofstream	outfile ("outfile");
	std::string		str;

	if ( infile.is_open() ) {
		while ( infile ) {
			std::getline(infile, str);
			outfile << str << std::endl;
			std::cout << str << std::endl;
		}
	}

}