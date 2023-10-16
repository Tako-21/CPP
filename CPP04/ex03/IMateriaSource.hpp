#ifndef __IMATERIASOURCE_HPP__
#define __IMATERIASOURCE_HPP__

# include "AMateria.hpp"

class AMAteria;

class IMateriaSource {

public:

	/*----------Constructor/Destructor/Copy Constructor---------*/
	IMateriaSource( void ) {};
	virtual ~IMateriaSource( void ) {}
	IMateriaSource&	operator= (const IMateriaSource& cpy );
	IMateriaSource( const IMateriaSource& cpy );


	virtual void		learnMateria(AMateria*) = 0;
	virtual AMateria*	createMateria(std::string const & type) = 0;

private:

};

#endif /* __IMATERIASOURCE_HPP__ */