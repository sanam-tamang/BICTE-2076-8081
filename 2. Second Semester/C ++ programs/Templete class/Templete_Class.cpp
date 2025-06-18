
//templete class variable
//basically we don't know how to use data types varies fiels to do that we need template and class name exactly

#include <iostream>
#include <conio.h>
using namespace std;
template <class temp>

class Calculator
{
   temp n1,n2;
   public:
   Calculator(temp n1,temp n2)
   {
       this->n1=n1;//this->n1 is above private access specifier member 
       this->n2=n2;
   }

   void display()
   {
       cout<<"NUmber are "<<n1<<" "<<n2;
       cout<<endl<<"Addition "<<add()<<endl;

   }
    
    temp add()
    {
        return n1+n2;
    }

};

int main()
{
    Calculator <int> cal(5,10);
    Calculator <float> f(5.5,10);
    cal.display();
    f.display();
    return 0;
}
