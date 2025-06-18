
#include <iostream>
using namespace std;

int main()
{
	//initializing variable inside the loop body
	
	for(int i=0;i<10;i++)
	{
	 // i value should be i-- otherwise it goes infinitely
		cout<<i+1<<endl;
		
	}
	
	return 0;
}

