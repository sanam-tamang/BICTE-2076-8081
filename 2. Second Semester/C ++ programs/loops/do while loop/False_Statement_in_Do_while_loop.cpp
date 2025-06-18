
/* Do while loop executes the program even if
it is false */
#include <iostream>
using namespace std;

int main()
{
	int i=5;
	
	do
	  {
	  	cout<<i;
	  	
	  }	while(0>i); /* this statement is false
	  because 0 is not greater than 5 so  but 
	  this program is executed without any error
	  in do while loop  */
	  
	  return 0;
}
