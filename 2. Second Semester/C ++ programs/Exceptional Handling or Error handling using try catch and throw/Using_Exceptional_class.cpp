
//Excecptional class is used for if you want to throw more than 
//one statement if you want to throw 2 statement then 2 exceptional class should be
#include <iostream>
#include <conio.h>

using namespace std;

class Exceptional_Handling{
int total_amount=100;
int getmoney;
public:
class ifmore{ }; //Exceptional class
void set_data()
{
    cout<<"Enter how much dollar do you want to withdraw ";
    cin>>getmoney;

    if(getmoney>total_amount)
            {
                throw ifmore();
            }
            else
            {
                cout<<"You successfully withdraw your $"<<getmoney<< " dollar ";
            }
}

};



int main()
{
    Exceptional_Handling ex;

    try{

  ex.set_data();

    }
  
    catch(Exceptional_Handling::ifmore)
{
    cout<<"You enter more money then you have ";
}
   
    return 0;
}