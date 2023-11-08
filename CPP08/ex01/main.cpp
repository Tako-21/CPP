/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:28:10 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/08 19:03:30 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int	main( void )
{

	Span sp = Span(10);
	sp.addMultipleNumber(0, 5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.displaySpan();
	std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span  : " <<  sp.longestSpan() << std::endl;
}