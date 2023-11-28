/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:28:04 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/28 16:45:30 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PMERGEME__
#define __PMERGEME__

# include <list>
# include <vector>
# include <cstdlib>
# include <sstream>
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
	static void	mergeSort( void );
	static bool	makePair( void );
private:

	static std::vector<std::pair<int, int> > _mergeMe;
	static std::list<int>					_list;
};

#endif /* __PMERGEME__ */