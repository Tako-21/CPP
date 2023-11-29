/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:28:04 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/29 18:12:56 by mmeguedm         ###   ########.fr       */
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
	static void	makePair( void );
	static void	mergeSort( std::vector<std::pair<int, int> > & pair );
	static void	sortPair( std::vector<std::pair<int, int> > & pair );
	static void	merge( std::vector<std::pair<int, int> > & mergeMe ,std::vector<std::pair<int, int> > & l_pair, std::vector<std::pair<int, int> > & r_pair );

private:

	static std::vector<std::pair<int, int> > _mergeMe;
	static std::list<int>					_list;
};

#endif /* __PMERGEME__ */