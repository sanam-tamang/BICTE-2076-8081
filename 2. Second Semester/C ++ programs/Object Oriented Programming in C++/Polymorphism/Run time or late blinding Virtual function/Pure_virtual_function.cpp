//pure  virtual fucntion 
#include <iostream>
#include <conio.h>

using namespace std;

class Pure_virtual
{
  public:
  virtual void show()=0;
};


  class Derived:public Pure_virtual
  {
    void show() // if this function is not in this derived class it wil show erro because 
    // we declaring pure virtual fucntion pure virtual function should be the base classs
    {
        cout<<endl<<"Implemention of pure virtual function in derived class ";
    }
  };

  int main()
  {
      Pure_virtual *p1;
      Derived d;
      p1=&d;
      p1->show();
      
      return 0;
  }

