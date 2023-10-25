/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:41:46 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/17 10:38:10 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

public:

	/*----------Constructor/Destructor/Copy Constructor---------*/
	MateriaSource( void );
	~MateriaSource();
	MateriaSource&	operator= (const MateriaSource& cpy );
	MateriaSource( const MateriaSource& cpy );

	/*----------Inherited Methods-------------------------------*/
	void		learnMateria(AMateria*);
	AMateria*	createMateria(std::string const & type);

private:

	AMateria*	_materia_data[4];
};

#endif /* __MATERIASOURCE_HPP__ */