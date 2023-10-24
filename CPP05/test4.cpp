# include <iostream>
# include <exception>
#include <stdexcept>


int	main( void )
{
	try
	{
		throw std::overflow_error("Oh shit");
	}
	catch (const std::overflow_error& ex)
	{
		std::cout << "Holly" << ex.what() << std::endl;
	} // this executes if f() throws std::overflow_error (same type rule)
	catch (const std::runtime_error& e)
	{} // this executes if f() throws std::underflow_error (base class rule)
	catch (const std::exception& e)
	{} // this executes if f() throws std::logic_error (base class rule)
	catch (...)
	{} // this executes if f() throws std::string or int or any other unrelated type
}
