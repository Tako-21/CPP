/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:28:43 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/09 19:07:16 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN__
#define __SPAN__

# include <vector>
# include <iostream>
# include <exception>
# include <algorithm>
# include <cstdlib>
# include <stdint.h>

class Span
{

public:

	Span( void );
	Span( unsigned int const & N );
	~Span();
	Span ( const Span& cpy );
	Span& operator= ( const Span& cpy );

	void				addNumber( std::vector<int>::iterator it, std::vector<int>::iterator end );
	void				addNumber( int number );
	unsigned int		shortestSpan();
	unsigned int		longestSpan();
	void				displaySpan() const ;
	std::vector<int>::iterator			begin();
	std::vector<int>::iterator			end();

	class SpanIsFull : public std::exception {
		public :
			virtual const char* what() const throw() { return ("Span is full\n"); };
	};

	class SpanSize : public std::exception {
		public :
			virtual const char* what() const throw() { return ("Size of Span is insufficient\n"); };
	};

	class RepTooHigh : public std::exception {
		public :
			virtual const char* what() const throw() { return ("Rep can't be superior to the size of Span\n"); };
	};


private:

	std::vector<int> _vec;
	unsigned int _max;
};

#endif /* __SPAN__ */