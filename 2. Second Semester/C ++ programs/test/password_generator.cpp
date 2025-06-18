
//Password generator 
//but i don't how to randomize data by the time so it shows same value every time
#include <iostream>
#include <conio.h>
using namespace std;
class Password{
    int size,num,i;
    public:
    Password():size(0),i(0) {};
    void set_data()
    {
        cout<<"Enter length of password ";
        cin>>size;
      

    }
    void get_pass()
    { 
       for(i=0;i<size;i++)
       {
            
         num=rand()%9;
        
         cout<<num;
         
         
       }
       

    }
};

int main()
{
    Password p1;
    p1.set_data();
    p1.get_pass();
    return 0;
    
}