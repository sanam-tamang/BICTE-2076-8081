
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Charc{
    private:
    char cnum[10];
    cnum[]={"zero","one","two", "Three", "Four", "five", "Six", "Seven", "Eight", "Nine"};
    int num,i,j,rem;

    public:
    void Inputs(){
      cout<<"Enter numbers ";
      cin>>num;

    }
    void Display(){
          while(num>0){
              rem=num%10;
              cout<<cnum[rem];
              num=num/10;

          }
    }
};

int main(){
    Charc c1;
    c1.Inputs();
    c1.Display();
    return 0;

}