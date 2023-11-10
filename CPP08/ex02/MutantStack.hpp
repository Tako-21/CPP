/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:01:37 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/10 19:17:33 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK__
#define __MUTANTSTACK__

# include <stack>
# include <iostream>
	
template <class T>
class MutantStack : public std::stack<T>
{

public:

	// template <typename PointerType>
	template <typename PointerType> class iterator {
		
	};

	typedef iterator<int*> iterator_fw;
	typedef iterator<const int*> const_iterator;
	
	// iterator begin( void ) { return iterator ( &begin[0] ); };
	MutantStack( void ) {}
	// ~MutantStack();
	// MutantStack ( const MutantStack& cpy );
	// MutantStack& operator= ( const MutantStack& cpy );

private:

	T*				_stack;
	std::stack<T>	_vec;
};

# include "MutantStack.tpp"

#endif /* __MUTANTSTACK__ */