#include <iostream>
#include <exception>

void	func( void )
{
		std::cout << "I take control" << std::endl;
		exit(-1);
		//	std::abort();
}

int	main( void )
{
	// std::set_terminate(&func);
	std::string	str = "Hello";
	try {
	std::cout << str.substr(10) << std::endl;
	}
	catch (std::out_of_range &e) {
		std::cout << "out of range\n";
	}
	catch (std::exception &e) {
		std::cout << "Oh shit" << e.what() << std::endl;
	}
}
