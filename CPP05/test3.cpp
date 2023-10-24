#include <iostream>
#include <stdlib.h>
 
using namespace std;
 
class A
{
    char *pBuffer;
    int  *pData;
 
public:
    A();
 
    ~A()
    {
        cout << "A::~A()" << endl;
    }
 
    static void *operator new(size_t taille)
    {
        cout << "new()" << endl;
        return malloc(taille);
    }
 
    static void operator delete(void *p)
    {
        cout << "delete" << endl;
        free(p);
    }
};
 
// Constructeur susceptible de lancer une exception :
A::A() 
try
{
    pBuffer = NULL;
    pData = NULL;
    cout << "Début du constructeur" << endl;
    pBuffer = new char[256];
    cout << "Lancement de l'exception" << endl;
    throw 1;
    // Code inaccessible :
    pData = new int;
}
catch (char)
{
    cout << "Je fais le ménage..." << endl;
    delete[] pBuffer;
    delete pData;
}
 
 
int main(void)
{
    try
    {
        A *a = new A;
    }
    catch (char)
    {
        cout << "Aïe, même pas mal !" << endl;
    }
    return 0;
}
