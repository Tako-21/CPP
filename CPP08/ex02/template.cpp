template <typename T> 
struct Multiplication 
{ 
	static void Accumuler(T& Resultat, const T& Valeur) 
	{ 
		Resultat *= Valeur; 
	} 
};


template <typename T> 
struct Addition 
{ 
	static void Accumuler(T& Resultat, const T& Valeur) 
	{ 
		Resultat += Valeur; 
	} 
};

template <typename T, typename Operation = Addition<T> > 
struct Accumulation 
{ 
    static T Accumule(const T* Debut, const T* Fin) 
    { 
        T Resultat = 0; 
        for ( ; Debut < Fin; ++Debut) 
            Operation::Accumuler(Resultat, *Debut); 
  
        return Resultat; 
    } 
}; 
  
template <typename T> 
T Accumule(const T* Debut, const T* Fin) 
{ 
    return Accumulation<T>::Accumule(Debut, Fin); 
} 
  
template <typename T, typename Operation> 
T Accumule(const T* Debut, const T* Fin) 
{ 
    return Accumulation<T, Operation>::Accumule(Debut, Fin); 
}

int	main( void )
{
		
	int numbers[] = {1, 2, 3, 4, 5};

	// Using default operation (Addition)
	int sumDefault = Accumule<int>(numbers, numbers + 5);

	// Using custom operation (Multiplication)
	int product = Accumule<int, Multiplication<int>>(numbers, numbers + 5);

	std::cout << "Sum (default operation): " << sumDefault << std::endl;
	std::cout << "Product (custom operation): " << product << std::endl;

	// int	tab[] = {1, 1, 2, 3, 4};

	// std::cout << Accumulation<int, Multiplication<int> >(tab, tab + 5) << std::endl;


	// Print the results
}