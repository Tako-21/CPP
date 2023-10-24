
#include <iostream>
using namespace std;
 
int main()
{
   int x = 1;
 
   // Some code
   cout << "Before try \n";
   try {
      cout << "Inside try \n";
      if (x == 0)
      {
         throw y;
         cout << "After throw (Never executed) \n";
      }
	  if ( x == 1 ) {
			throw y; }
   }
   catch (int y ) {
      cout << "Exception Caught \n";
   		cout << x << endl;
   }
 
   cout << "After catch (Will be executed) \n";
   return 0;
}

