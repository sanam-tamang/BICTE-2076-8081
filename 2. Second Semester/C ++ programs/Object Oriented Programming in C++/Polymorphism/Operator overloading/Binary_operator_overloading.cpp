
#include <iostream>
using namespace std;

class Distance
{
    int meter;
    int centimeter;
    public:
    Distance() {
         meter=centimeter=0;
    }
    Distance(int m,int cm)
    {
        meter=m;
        centimeter=cm;
    }
    void getDistance()
    {
        cout<<"Enter meter ";
        cin>>meter;
        cout<<"Enter centimeter ";
        cin>>centimeter;
    }
    void show()
    {
        cout<<meter<<"+"<<centimeter<<endl<<endl;
    }
    Distance operator+(Distance);
};
  Distance Distance::operator+(Distance d2)
{
    int m=meter+d2.meter;
    int cm=centimeter+d2.centimeter;
    if(cm>=100)
    {
        cm-=100; // if 100cm=1meter so if cm is 100 then meter gets inceamented and cm will be decremented by 100 
        m++;
    }
    return Distance (m,cm);
}

int main()
{
 Distance d1(3,50);
 Distance d2,d3,d4;
 d2.getDistance();
 d3=d1+d2;
 d3.show();
 d4=d1+d2+d3;
 d4.show();
 return 0;
}