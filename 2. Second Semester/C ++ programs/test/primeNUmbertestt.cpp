//this works very fine and accurately
#include <iostream>
#include <conio.h>
using namespace std;
class PrimeNumber{
    //this is automatically private access specifier by default if you don't give any information on  it
        int num,i,j,count;//initializing values
        public:
        void input()
        {
            cout<<"Enter number ";
            cin>>num;

        }
        void process(){
            count=0;
         for(i=1;i<=num;i++){
             if(num%i==0)
             {
                 count++;
             }
         }
        }
        void output(){
               if(count==2){
                   /*prime number is divided in 1 or his own number
                   if count is 2 it means it is divided by 1 or his own
                   it is prime number otherwise it is constonant number */
                   cout<<" Prime Number ";

               }
               else
               {
                   cout<<"Is not prime number ";
               }
               
        }
        
};

int main()
{
    PrimeNumber p1;//object initialization of class
    p1.input();
    p1.process();
    p1.output();
    return 0;
}