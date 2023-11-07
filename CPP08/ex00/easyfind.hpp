/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:23:27 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/07 16:42:55 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND__
#define __EASYFIND__

# include <stdlib.h>
# include <vector>
# include <iostream>
# include <exception>

class OccurenceNotFound : public std::exception {
	public :
		virtual const char* what() const throw() { return ("Occurence not found"); }; 
};

template <typename T>
void	easyfind(T const & param1, const int& param2)
{
	for ( unsigned long i = 0; i < param1.size(); i++ ) {
		if ( param1[i] == param2 ) {
			std::cout << "found !" << std::endl;
			return ;
		}
	}
	throw ( OccurenceNotFound() );
}

#endif /* __EASYFIND__ */