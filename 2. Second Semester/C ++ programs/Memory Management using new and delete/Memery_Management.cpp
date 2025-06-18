
//Memory Mangement in c++ using new and delete keyword

#include <iostream>
#include <conio.h>
using namespace std;

class Memory_Mangement{

char *dname;
public:

void set_data();
char* get_name();
~Memory_Mangement()//destructor 
{ delete [] dname;
    
     cout<<endl<<"Size of name at the end is "<<sizeof(dname)<<endl;
}

};

void Memory_Mangement::set_data()
{   dname=new char [10];
    cout<<"Enter your name ";
    cin>>dname;
    cout<<endl<<"Size of name at the beginning is "<<sizeof(dname)<<endl;
}

char* Memory_Mangement::get_name()
{   //delete [] dname; ==name is deleted and then returns the some address maybe error like that
    return dname;
    
}
 
int main()
{ 
    Memory_Mangement m;//object of memory management
    m.set_data();
    cout<<"Name is "<<m.get_name();
    return 0;
}