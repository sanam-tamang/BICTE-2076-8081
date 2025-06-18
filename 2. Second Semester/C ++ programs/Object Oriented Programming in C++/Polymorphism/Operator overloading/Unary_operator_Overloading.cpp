//Unary operator overloading 
#include <iostream>
#include <conio.h>

using namespace std;

class Unary_Op{
 int a;
 public:
 Unary_Op():a(0){}
 void operator ++()//prefix
 {
    ++a;
 }
 void operator ++(int)//postfix
 {
     a++;
 }
 void display()
 {
     cout<<endl<<"The value is "<<a;
 }
};

int main()
{
    Unary_Op u;
    ++u; //prefix
    u++; //postfix
    u.display();
    return 0;
}