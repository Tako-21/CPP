/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:42:51 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/09 14:38:06 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <iostream>

class Claptrap {


private:

	std::string				_name;
	unsigned int			_hit_points;
	unsigned int			_energy_points;
	unsigned int			_attack_damage;

public:

	/*----Constructor/Destructor----*/
	Claptrap( void );
	Claptrap( std::string name );
	~Claptrap();

	/*----Public member functions---*/
	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
};

#endif /* __CLAPTRAP_HPP__ */