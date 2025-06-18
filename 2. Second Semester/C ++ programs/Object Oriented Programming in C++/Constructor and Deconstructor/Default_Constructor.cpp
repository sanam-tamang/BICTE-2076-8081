
// Default Constructor 

#include <iostream>
#include <conio.h>

using namespace std;

class DefaultConstructor{
	
	public://PUblic specifier
	DefaultConstructor(){ //Constructor name is same as class name
		cout<<"This is an example of default constructor\n";
		
	}
			
};

int main()
{
	DefaultConstructor d1;
	return 0;
}
