//doing prime number program from this program this is not 100 % accurate 
#include <iostream>
#include <conio.h>
using namespace std;

class PrimeNumber{
    int num,i;
    //i=2 does not support in this place is class 
    //it is in public 
    public:
    void input(){
        cout<<"Enter number ";
        cin>>num;
        return;
    }
    void display(){
        i=2;
        do{
            if(num%i==0){
                cout<<num<<" is not prime number";
                break;
            }
            else if(num%i==2)
            {
                cout<<num <<" is prime number";
                break;
            }
            i++;
        }while(i<num);
        return;
    }
};

int main(){

    PrimeNumber p1;
    p1.input();
    p1.display();
    return 0;
   
}