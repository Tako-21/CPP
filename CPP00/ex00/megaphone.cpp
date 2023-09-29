#include <iostream>
#include <stdio.h>

void	capitalize(char *c, char ***argv){
	if ((*c >= 'a' && *c <= 'z'))
		std::cout << (char)(*c - 32);
	else if ((*c >= 32 && *c <= 127))
		std::cout << (char)(*c);
	(**argv)++;
}

int	main(int argc, char **argv)
{
	argv++;
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (; *argv; argv++){
		for (; (**argv); capitalize(&(**argv), &argv));
	}
	std::cout << std::endl;
}