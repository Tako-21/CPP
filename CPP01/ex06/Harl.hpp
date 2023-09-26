/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:55:06 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/25 17:58:33 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
#define __HARL_HPP__

# include <iostream>

typedef enum {
	NONE,
	DEBUG,
	INFO,
	WARNING,
	ERROR
}	e_HarlLevel;

typedef struct	HarlMap
{
	std::string	harl_level;
	e_HarlLevel	level;
}				s_HarlMap;


class Harl {


public :

	Harl( void );
	~Harl( void );

	void	complain( std::string level );
	int		a;

private :

	void	_debug( void );
	void	_info( bool newline );
	void	_warning( bool newline );
	void	_error( bool newline );
};


#endif /* __HARL_HPP__*/