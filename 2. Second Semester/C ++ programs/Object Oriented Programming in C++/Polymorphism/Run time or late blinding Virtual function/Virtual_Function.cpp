
#include <iostream>
#include <conio.h>

using namespace std;

class Base
{


    
    public:

    virtual void display()
    {
        cout<<"Displaying consol on the base class ";

    }
};

class Derive:public Base {
    public:
    void display()
    {
        cout<<"Displaying on the consol on the other hand derive class ";
    }
};

int main()
{
    Base *b;
    Derive d;
    b=&d;

    b->display();
    
    return 0;
}