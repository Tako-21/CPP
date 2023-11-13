/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:01:37 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/13 17:14:55 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK__
#define __MUTANTSTACK__

# include <stack>
# include <iostream>
# include <vector>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{

public:

	typedef typename	std::stack<T, Container>::container_type::iterator iterator;
	typedef typename	std::stack<T, Container>::container_type::const_iterator const_iterator;
	

	MutantStack( void ) {}
	MutantStack( MutantStack const & cpy ) : std::stack<T, Container>(cpy) { *this = cpy; }
	MutantStack&	operator= ( MutantStack const & cpy)
	{ std::stack< T, Container >::operator=( cpy ); }
	
	~MutantStack() {}
	iterator begin( void )				{ return ( this->c.begin() );}
	iterator end( void )				{ return ( this->c.end() );}
	const iterator begin( void ) const	{ return ( this->c.begin() );}
	const iterator end( void ) const	{ return ( this->c.end() );}
	
};

#endif /* __MUTANTSTACK__ */