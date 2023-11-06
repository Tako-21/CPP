/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:37:27 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/06 19:15:33 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY__
#define __ARRAY__

# include <exception>

template <class T>
class Array
{

public:

	Array( void );
	Array( unsigned int lenght );
	~Array();
	Array ( const Array& cpy );
	Array& operator= ( const Array& cpy );
	unsigned int size( void );

	T&	operator[] ( const unsigned int index );

	class OutOfBounds : public std::exception {
		public :
			virtual const char*	what() const throw() { return ("Index out of bounds"); };
	};

private:

	T*				_arr;
	unsigned int	_lenght;
};

# include "Array.tpp"

#endif /* __ARRAY__ */