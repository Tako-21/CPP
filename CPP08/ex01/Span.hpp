/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:28:43 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/08 18:53:25 by mmeguedm         ###   ########.fr       */
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

class Span {

public:

	Span( void );
	Span( unsigned int const & N );
	~Span();
	Span ( const Span& cpy );
	Span& operator= ( const Span& cpy );

	void				addNumber( int number );
	unsigned int		shortestSpan();
	unsigned int		longestSpan();
	void				displaySpan() const ;
	void				addMultipleNumber( unsigned int number, unsigned int rep );

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

	std::vector<int> _vec;

private:

	unsigned int _max;
	static std::vector<int>::iterator _it;
};

#endif /* __SPAN__ */