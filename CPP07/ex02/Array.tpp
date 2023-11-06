/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:37:37 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/06 18:59:16 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <class T>
Array<T>::Array() : _arr(new T[0]), _lenght(0) {}

template <class T>
Array<T>::~Array( void )
{
	delete [] _arr;
}

template <class T>
Array<T>::Array( unsigned int lenght ) : _arr(new T[lenght]), _lenght(lenght) {}

template <class T>
Array<T>::Array ( const Array& cpy )
{
	for ( int i = 0; i < _lenght; i++ ) {
		this->_arr[i] = cpy._arr[i];
	}
}

template <class T>
Array<T> &Array<T>::operator= ( const Array& cpy )
{
	delete [] _arr;
	_arr = new T[this->_lenght];
	for ( int i = 0; i < _lenght; i++ ) {
		_arr[i] = cpy._arr[i];
	}
	return *this;
}

template <class T>
unsigned int Array<T>::size( void )
{
	return ( this->_lenght );
}

template <class T>
T&	Array<T>::operator[] ( const unsigned int index )
{
	if ( index < 0 || index > this->_lenght - 1 ) {
			throw ( OutOfBounds() );
	}
	return ( _arr[index] );
}