
//Exacly maybe you thought why we were using virtual fucntion in our program 
//that's simple when you declare virtual fucntion that declare in base
//and it's defination is done in derived class 
//when derived class doesnot have same class fucntion 
//name at that momment it is helpful 
//to work virtual if
//derived class has same
//name of fucntion name at that time
//derived class fucntion is class


#include <iostream>
#include <conio.h>
using namespace std;

class Animal
{
  public:
  virtual void eat() 
  {
      cout<<"Eat generic food ";

  }
};

class Cat:public Animal
{
    public:
    void eat()
    {
        cout<<"Cat eat rat ";
    }
};

class Dog:public Animal
{
   public:
   void shout()
   {
       cout<<"Dog bark ";

   }
   
};

int main()
{
   Animal *a,*b;
   Cat c;
   Dog d;
   a=&c;
   b=&d;
   a->eat(); //cat eat rat 
   d.shout(); //non virtual fuction 
   b->eat(); //we doesnot define eat in dog class so 
              //it will be printing => eat generic food that so 
  return 0;

}