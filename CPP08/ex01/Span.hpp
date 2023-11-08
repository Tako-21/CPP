/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:28:43 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/08 14:44:02 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN__
#define __SPAN__

# include <vector>
# include <iostream>
# include <exception>

class Span {

public:

	Span( void );
	Span( unsigned int const & N );
	~Span();
	Span ( const Span& cpy );
	Span& operator= ( const Span& cpy );

	void				addNumber( int number );
	unsigned int		shortestSpan() const;
	unsigned int		longestSpan() const;
	void				displaySpan() const;

	class SpanIsFull : public std::exception {
		public :
			virtual const char* what() const throw() { return ("Span is full\n"); };
	};

private:

	unsigned int _max;
	std::vector<int> _vec;
	static std::vector<int>::iterator _it;
};

#endif /* __SPAN__ */