
//this is not binary to 
//->>decimal 


#include <iostream>
#include <conio.h>
using namespace std;

class Room
{
    int rnum;
    char teachername[50],subject[50],period[50];
    public:
    char* get_name()
    {
       return teachername;
    }
    void set_all()
    {
        cout<<"Room no: ";
       cin>>rnum;
        cout<<"Subject: ";
         cin>>subject;
        cout<<"Teacher Name: ";
       cin>>teachername;
      cout<<"Period: ";
      cin>>period;

    }

    char* get_subject()
    {
         return subject;
    }
    char* get_period()
    {
      return period;
    } 
    int roomnumber()
    {
       
       return rnum;
    }

    

};

int main()
{
    Room r1;
   r1.set_all();
    cout<<"****Displaying**** the result ";
    cout<<endl<<endl<<"Room number: "<<r1.roomnumber();
    cout<<endl<<"Teacher name: "<<r1.get_subject();
    cout<<endl<<"Subject: "<<r1.get_subject();
    cout<<endl<<"Period: "<<r1.get_period();
    return 0;
    
}