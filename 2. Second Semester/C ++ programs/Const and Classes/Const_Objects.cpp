
//Const Objects
//Const object means only const function 
//is taking other fuction is not taking

#include <iostream>
#include <conio.h>
using namespace std;

class Const_Object_Example
{
   public:
   void show_one()
   {
       cout<<"Show one without const ";
   }
   void show_two()const
   {
       cout<<"Show two with const ";
   }
};

int main()
{
   const Const_Object_Example c;
   // c.show_one(); //=> it is error bcz it is not const member function
    c.show_two(); //show two has const member function so it is not error 
    return 0;
}

