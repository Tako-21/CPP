# include <iostream>
# include <string>

int	main( void )
{
	double		d;
	char* end{};
	
	std::string	s("12.21");

	d = static_cast<double>(std::strtod(s.c_str(), &end));

	std::cout << d << std::endl;
}