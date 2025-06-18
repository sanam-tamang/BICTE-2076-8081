
//Single level inheritance 
//in inheritance We can use base class data to child class
#include <iostream>
#include <conio.h>
using namespace std;
class Base_class{
	protected:
		int age;//declaring age in the base class
		//in the case of inheritance we basically write variables in the protected forms
	
};
class Child_class: public Base_class{
	//we don't initialize age in child class bcz it already initialize in the base class or main class    
	public:
		void myage()
		{
			age=18;//this variable inherited by public child class

			cout<<"your age is "<<age;
		
		}
		
};

int main(){
	
	Child_class ch;
	ch.myage();
	
	return 0;
}
