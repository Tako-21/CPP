# include <iostream>
# include <cstdint>

int	main( void )
{
	    int a = 21;
    int* ptr_a = &a;
    
    uintptr_t addr = reinterpret_cast<uintptr_t>(ptr_a);
    std::cout << addr << std::endl;

	int* value = reinterpret_cast<int*> (addr);
    // Deserialize the `int` value from the `uintptr_t`
    
	// int b = reinterpret_cast<int*>(*addr);
    std::cout << *value << std::endl;

    return 0;
}