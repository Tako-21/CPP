#include <iostream>
#include <exception>
 
using namespace std;
 
void mon_gestionnaire(void)
{
    cout << "Exception non gérée reçue !" << endl;
    cout << "Je termine le programme proprement..."
         << endl;
    exit(-1);
}
 
int lance_exception(void) throw (int)
{
    throw 2;
}
 
int main(void)
{
	std::abort();
	try
    {
        lance_exception();
    }
    catch (int)
    {
        cout << "Exception de type double reçue : " << endl;
    }
    return 0;
}
