
//binary operator overloading
#include <iostream>
#include <conio.h>
using namespace std;
class Operator_Overloading_Sample{

    private:
    int a,b;
    public:
    Operator_Overloading_Sample():a(0),b(0){};

/*void set_data(int a, int b) //this is without taking value from user 
    {
        this->a=a;
        this->b=b;
    }*/

     void set_data()// taking value from user 
    {
        cout<<"Enter data of A ";
        cin>>a;
        cout<<"Enter data of B ";
        cin>>b;

    }

    Operator_Overloading_Sample operator +(Operator_Overloading_Sample p1)
    {
      Operator_Overloading_Sample p2;
      p2.a=p1.a+a;
      p2.b=p1.b+b;
   return p2;
    }

    int get_A()
    {
        return a;
    }
    int get_B()
    {
        return b;
    }
};

int main()
{
    Operator_Overloading_Sample o1,o2,o3;
    o1.set_data();
    o2.set_data();

 /*   o1.set_data(10,20);    //without taking
         o2.set_data(10,20);  //value from user 
    */
    o3=o1+o2;
    cout<<"The value of A is "<<o3.get_A()
     <<" The vaue of B is "<<o3.get_B();
     return 0;
}