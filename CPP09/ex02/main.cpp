/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:33:14 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/12/04 17:06:13 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

int	main(int argc, char** argv)
{
	std::vector<int>	vec;
	
	try {
		if ( parseInput(argc, argv, vec) == false ) {
			throw ( std::runtime_error("Error") );
		}
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
		return ( -1 );
	}

	sort(vec, 1);

	for (std::vector<int>::iterator it = vec.begin(); it < vec.end(); it++)
	{
		if (*it != vec[0])
		{
			if (*it < *(it -1))
			{	std::cout << "error" << std::endl;
				return 1;
			}
		}
	}
	std::cout << "SUCCCCCCCCCCCCCEEEEEEEEEEEEEESSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS" << std::endl;
	return (0);
}