// Example program
#include <iostream>
#include <string>
#include <fstream>
#include <string>


class Sed {

public :

	// Sed( std::ifstream const infile, std::ofstream const outfile );
	Sed( std::ifstream const & infile, std::ofstream const & outfile, std::string occurence, std::string replaced );
	~Sed( void );

	void sedReplace( void ) const;

private :

	std::ifstream const	& _infile;
	std::ofstream const	& _outfile;
	std::string const	_occurence;
	std::string const	_replaced;
};


Sed::Sed( std::ifstream const & infile, std::ofstream const & outfile, std::string occurence, std::string replaced ) :
_infile(infile),
_outfile(outfile),
_occurence(occurence),
_replaced(replaced) {

}

Sed::~Sed( void ) {}

void	Sed::sedReplace(  ) const {

	// return (this->_occurence);
	// if ( this->_ ) {
	// 	while ( infile ) {
	// 		std::getline(infile, line);
	// 		outfile << line << std::endl;
	// 		std::cout << line << std::endl;
	// 	}
	// }
}

int	main( int argc, char **argv )
{
	if (argc != 4)
	{ 
	    std::cout << "Error" << std::endl;
		return (-1);
	}
	else
	    std::cout << "Yes !" << std::endl;
	std::string		filename = argv[1];
	filename.append(".replace");

	std::string		line;
	std::ifstream	const infile (argv[1]);
	std::ofstream	const outfile (filename);

	Sed	sed( infile, outfile, argv[2], argv[3] );
}
