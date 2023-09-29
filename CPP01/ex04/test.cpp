// Example program
#include <iostream>
#include <string>
#include <fstream>
#include <string>

class Sed {

public :

	// Sed( std::ifstream const infile, std::ofstream const outfile );
	Sed( std::ifstream& infile, std::ofstream& outfile, std::string occurence, std::string replaced );
	~Sed( void );

	void sedReplace( void ) const;

private :

	std::ifstream& _infile;
	std::ofstream& _outfile;
	std::string const	_occurence;
	std::string const	_replaced;
};


Sed::Sed( std::ifstream& infile, std::ofstream& outfile, std::string occurence, std::string replaced ) :
_infile(infile),
_outfile(outfile), 
_occurence(occurence),
_replaced(replaced) {

	this->sedReplace();
}

Sed::~Sed( void ) {}

void	Sed::sedReplace( void ) const {

	std::string	line;
	size_t		found;

	if ( !this->_infile.is_open() )
	{
		std::cout << "Error while opening the file" << std::endl;
		exit(EXIT_FAILURE);
	}
	if ( std::getline(this->_infile, line, '\0') )
	{
		found = line.find(this->_occurence);
		while ( found != std::string::npos )
		{
			line.erase(found, this->_occurence.length());
			line.insert(found, this->_replaced);
			found = line.find(this->_occurence);
		}
		this->_outfile << line;
		this->_infile.close();
		std::cout << "Another file was successfuly created !" << std::endl;
	}
}

int	main( int argc, char **argv )
{
	if (argc != 4)
	{
		std::cout << "Error" << std::endl;
		return (-1);
	}
	std::ifstream	infile (argv[1]);
	std::string		filename = argv[1];
	filename.append(".replace");
	std::ofstream	outfile (filename);

	Sed	sed( infile, outfile, argv[2], argv[3] );
}

