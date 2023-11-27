/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RNN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:47:03 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/27 18:40:15 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RNN__
# define __RNN__


# include <stack>
# include <cctype>
# include <cstdlib>
# include <iostream>
# include <exception>

typedef struct	operandsMap {
	char	op;
	void	(*operatorFunction)();
}				operandsMap;

class RNN {

public:

	RNN( void );
	~RNN();
	RNN ( const RNN& );
	RNN& operator= ( const RNN& );

	static void	parseInput( std::string line );
	static void	addition( void );
	static void	soustraction( void );
	static void	multiplication( void );
	static void	division( void );
	static bool isOperand(char op);
	static void	doStack( void );

private:

	static std::stack<int>	_stack;
	static int				_a;
	static int				_b;
};

#endif /* __RNN__ */