/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:33:14 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/12/04 19:03:43 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

int	main(int argc, char** argv)
{
	std::vector<int>	vec;
	std::deque<int>		deque;
	struct timespec		startdeq;
	struct timespec		enddeq;
	struct timespec		startvec;
	struct timespec		endvec;

	try {
		if ( parseInput(argc, argv, vec) == false ) {
			throw ( std::runtime_error("Error") );
		}
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
		return ( -1 );
	}
	try {
		if ( parseInput(argc, argv, deque) == false ) {
			throw ( std::runtime_error("Error") );
		}
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
		return ( -1 );
	}
	std::cout << "Before : ";
	displayVec( vec );
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &startvec);
	sort(vec, 1);
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &endvec);
	
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &startdeq);
	sort(deque, 1);
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &enddeq);
	std::cout << "After : ";
	displayVec( deque );
	std::cout << "Time to process a range of " << vec.size() << " elements with std::vector	: " << ((endvec.tv_sec - startvec.tv_sec) * 1000000.0 + (endvec.tv_nsec - startvec.tv_nsec) / 1000.0 ) << " us" << std::endl;
	std::cout << "Time to process a range of " << deque.size() << " elements with std::deque	: " << ((enddeq.tv_sec - startdeq.tv_sec) * 1000000.0 + (enddeq.tv_nsec - startdeq.tv_nsec) / 1000.0 ) << " us" << std::endl;
	
	return (0);
}