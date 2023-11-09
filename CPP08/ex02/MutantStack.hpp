/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:01:37 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/09 17:16:54 by mmeguedm         ###   ########.fr       */
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

	template <typename T> T iterator(void) {
		std::cout << "Test" << std::endl;
	}
	// MutantStack( void );
	// ~MutantStack();
	// MutantStack ( const MutantStack& cpy );
	// MutantStack& operator= ( const MutantStack& cpy );

// private:
};

#endif /* __MUTANTSTACK__ */