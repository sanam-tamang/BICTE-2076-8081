
//Double pointer 
//DOuble pointer is used to store a pointer address
//if we want to store address of double pointer we write triple astrike value ***ptr 

#include <iostream>
#include <conio.h>

using namespace std;
class PtrBase{

int a=0;
int* ptr=NULL;// it is used to store the integer variable adress
int **pptr=NULL;//double pointer used for storing single pointer address

public:
void get_data()
{
    ptr=&a;
    pptr=&ptr; 
    a=10; // value at the last but when address gets changed other value change 
   cout <<"Address of a is "<<&a<<endl;
    cout <<"Address of *ptr is "<<&ptr<<endl;
     cout <<"Address of **pptr "<<&pptr<<endl;

      cout<<endl<<"Value of a is "<<a<<endl;
      cout <<"Value of *ptr is "<<*ptr<<endl;
      cout <<"Value of **ptr is "<<**pptr<<endl;

      cout <<endl<<" let's see what ptr prints "<<ptr<<endl; //it prints the address of a 
       cout <<endl<<" let's see what pptr prints "<<pptr<<endl;// it prints the address of ptr
      cout <<endl<<" let's see what *pptr prints "<<*pptr<<endl;// it prints the address of a
}

}
;

int main()
{
    PtrBase p1;
    p1.get_data();
    return 0;
}