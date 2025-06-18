
// This is an example of Encapsulation 

#include <iostream>
#include <conio.h>
using namespace std;
class Bike
{
    // by default class is private so don't need to declare private:
   // To understand we will write private: also
  // Private Access specifier
   private:
   string name;
   string company_name;
   double price;

    //Public Access specifier
   public:
   	void in_value( string name, string company_name, double price)
   	{
   		// private variable taking function data
   		this->name=name;
   		this->company_name=company_name;
   	    this->price=price;

	   }
   	void display()
   	{
   		// displaying data

   		cout<<"\n\nName of Bike: "<<name;
   		cout<<endl<<"Company name: "<<company_name;
   		cout<<endl<<"Price of Bike: RS "<<price;

	   }
};

int main()
{
	Bike B; // object of class is B
	// object can only access the public member function or data


	B.in_value("Hero","Hero Honda Company ",199000);
	B.display();

	B.in_value("Yatri","Yatri Company",499000);
	B.display();
	/*
    You can use many function as much as you want
	.
	.
	.
	.
	*/

	return 0;
}
