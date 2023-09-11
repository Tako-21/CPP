#include <iostream>

int	i = 21;
namespace { int i = 1000; } // espace de nom anonyme
namespace test { int i=2500; } // espace de nom test
int main() {
std::cout << "i de l'espace anonyme vaut: " \
<< ::i << std::endl; // 1000
std::cout << "i de test vaut: " << test::i \
<< std::endl; //2500
return 0;
}
