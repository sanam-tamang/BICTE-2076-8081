
#include <iostream>
using namespace std;
class complex
{
    float x,y;
    public:
    complex()
    {
          x=y=0;
    }
    complex(float real,float imaginary )
    {
           x=real;
           y=imaginary;
    }
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }

    complex operator+(complex c)
    {
        complex sum;
        sum.x=c.x+x;
        sum.y=c.y+y;
        //c.x,c.y refers for object c2
        //x refers for first object c1 
      // cout<<endl<<endl<<c.x<<"=c.x";
        return sum;
        
    }
};


int main()
{
    complex c1,c2,c3;
    c1=complex(2,3);
    c2=complex(7,9);
    c3=c1+c2; //  this calls the operator function 
    c1.display();
    c2.display();
    c3.display();
    return 0;
}