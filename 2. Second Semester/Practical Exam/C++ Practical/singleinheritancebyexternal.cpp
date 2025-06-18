//Example of Single inheritance
#include <iostream>
#include <conio.h>
using namespace std;

class BaseClass{
	protected:
		int age;
};

class DerivedClass:public BaseClass{
	public:
		void setData(){
			cout<<"Enter your age: ";
			cin>>age;
		}
		void displayData(){
			cout<<"Your age is: "<<age;
		}
};

int main(){
	DerivedClass d1;
	d1.setData();
	d1.displayData();
	return 0;
	
}
