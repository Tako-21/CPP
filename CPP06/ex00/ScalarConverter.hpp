/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:44:08 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/28 11:45:52 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARCONVERTER__
#define __SCALARCONVERTER__

# include <iostream>

typedef	enum	e_type {
	NONE,
	CHAR,
	INT,
	FLOAT,
	DOUBLE
}				t_type;

class ScalarConverter {

public:

	ScalarConverter( std::string number );
	~ScalarConverter();
	ScalarConverter ( const ScalarConverter& cpy );
	ScalarConverter& operator= ( const ScalarConverter& cpy );

	void		setType( void );
	static void	convert( std::string str );


	/*	Convert types	*/
	bool		convertChar( void );
	bool		convertInt( void );
	bool		convertFloat( void );
	bool		convertDouble( void );

	bool		isChar( void );
	bool		isInt( void );
	bool		isDouble( void );
	bool		isFloat ( void );

	void		castChar( void );
	void		castInt( void );
	void		castFloat( void );
	void		castDouble( void );
	
	void		printChar( void );
	void		printInt( void );
	void		printFloat( void );
	void		printDouble( void );

	typedef struct	s_Convert_Map
	{
		t_type	type;
		bool	(ScalarConverter::*getType)();
		void	(ScalarConverter::*typeCast)();
		void	(ScalarConverter::*printType)();
	}				t_Convert_Map;

private:
	


	std::string				_number;

	/*	Get	the type of an object	*/	
	

	static t_type		_type;
	static char			_char;
	static int			_int;
	static float		_float;
	static double		_double;
};


#endif /* __SCALARCONVERTER__ */
