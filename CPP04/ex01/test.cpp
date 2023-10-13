#include <iostream>
#include <stdio.h>
using namespace std;
 
class Test {
public:
    Test(int a) 
	{
		this->a = a;
	}
    Test(const Test& t)
    {
        cout << "Copy constructor called " << endl;
    }
 
    /*Test& operator=(const Test& t)
    {
		cout << this->a << endl;
		cout << t.a << endl;
        cout << "Assignment operator called " << endl;
        return *this;
    }*/
	int	a;
};
 
// Driver code
int main()
{
    Test t1(21), t2(42);
    t2 = t1;
    t2.a = 12;
	cout << t2.a << t1.a << endl;
	//Test t3 = t1;

	
	return 0;
}
