/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:28:04 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/28 10:41:45 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PMERGEME__
#define __PMERGEME__

# include <cstdlib>
# include <iostream>
# include <exception>

# define SPACE 32

class PmergeMe {

public:

	PmergeMe( void );
	~PmergeMe();
	PmergeMe ( const PmergeMe& cpy );
	PmergeMe& operator= ( const PmergeMe& cpy );

	static bool	parseInput( std::string input );

private:
};

#endif /* __PMERGEME__ */