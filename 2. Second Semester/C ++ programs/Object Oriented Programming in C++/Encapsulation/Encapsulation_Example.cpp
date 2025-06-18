//Encapsulation means class value directly not accessible outside of the world is basically known as a Encapsulation

#include <iostream>
#include <conio.h>

using namespace std;
class Encaps
{
   private:
   int a,b;
   public:
   void set_data()
   {
      cout<<"Enter two numbers ";
      cin>>a>>b;
   }
    void getdata()
   {
     cout<<"Addition of two number is "<<a+b;
   }
};

int main()
{
    //private data directly not accessible by main fuction so we use somekind of mechanism to use that so 
    Encaps E1;
    E1.set_data();
    E1.getdata();
    return 0;
}