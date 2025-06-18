// function overloading 

#include <iostream>
#include <conio.h>

using namespace std;

class Func_overloading{
    public:
    void print(int a){
        cout<<"inter is "<<a<<endl;

    }
    void print(double a)
    {
        cout<<"Double is  "<<a<<endl;
    }
    void print(string a){
        cout<<"Character is "<<a<<endl;
    }

};

int main()
{
    Func_overloading f1;
    f1.print(5);
    f1.print(5.99);
    f1.print("C++");
    return 0;
}
