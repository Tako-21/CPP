/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:28:10 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/08 14:44:33 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int	main( void )
{
	Span	obj(5);
	obj.addNumber(21);
	obj.addNumber(21);
	obj.addNumber(21);
	obj.addNumber(21);
	obj.addNumber(21);
	obj.addNumber(21);
	obj.displaySpan();
}