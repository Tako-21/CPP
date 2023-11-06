/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:54:22 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/06 14:57:07 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__TEMPLATE_HPP__
#define __TEMPLATE_HPP__

template <typename T> T swap(T& x, T& y)
{
	T	cpy;

	cpy = x;
	return ( x = y, y = cpy);
}

template <typename T> T min(T const & x, T const & y)
{
	return ( x > y ) ? y : x;
}

template <typename T> T max(T const & x, T const & y)
{
	return ( x > y ) ? x : y;
}

#endif