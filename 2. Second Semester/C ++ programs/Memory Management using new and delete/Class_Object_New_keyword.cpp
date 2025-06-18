//New keyword in class object

#include <iostream>
#include <conio.h>
using namespace std;

class Test_new_Object
{
   public:
   void show_data()
   {
       cout<<"Hello Programmers data is showing here ";

   }
};

int main()
{
    Test_new_Object *t=new Test_new_Object;
    t->show_data();
    delete t;  //you can also delete the object after process is done here 
    return 0;
}