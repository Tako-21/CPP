/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:28:10 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/09 19:16:22 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int	main( void )
{
	std::vector<int> bob(5);
	Span sp = Span(15);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addNumber(sp.begin(), sp.end());
	sp.displaySpan();
	// for (std::vector<int>::iterator it = sp.begin();  it != sp.end(); it++ ) {
	// 	std::cout << *it << std::endl;
	// }

	std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span  : " <<  sp.longestSpan() << std::endl;
}