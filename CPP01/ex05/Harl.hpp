/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:55:06 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/01 16:48:39 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
#define __HARL_HPP__

# include <iostream>

class Harl {


public :

	Harl( void );
	~Harl( void );

	void	complain( const char* level );
	void	complain( std::string level );

private :

	void	_debug( void );
	void	_info( void );
	void	_warning( void );
	void	_error( void );
};


#endif /* __HARL_HPP__*/