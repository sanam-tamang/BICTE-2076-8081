//Const Member function 
//function will be declared as a const
//where value is not editable if so then compiler shows error here
#include <iostream>
#include <conio.h>
using namespace std;
class Const_fun_example
{
  int a,b;
  public:
  void set_data()
  {
      cout<<"Enter value of a and b ";cin>>a>>b;
  }

  int get_data()const
  {
   // a=10; b=5; // => Error can't modify the value in const function
    return a+b;
  }

};

int main()
{
    Const_fun_example c1;
    c1.set_data();
    cout<<"Addtion of two nuber is given below "<<c1.get_data();
    return 0;
}