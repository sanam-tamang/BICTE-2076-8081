
// Getting the largest 3 digit numbers of specific number 2 number 

#include <iostream>
#include <conio.h>
using namespace std;
class Gnum{//gnum=getnumber
   int a,b,mul,largest3digit,count;
   public:
   Gnum();
   void set_data();
   void iferror();
  void get_largest3digit();
  int process_data();

}; //end of the class 


  Gnum::Gnum() //default constructor 
   {
      mul=a=b=count=0;
   }

void Gnum::set_data() //setting data that take data from user 
   {
       cout<<"Enter two numbers to get largets"
       <<endl<<"3 digit numbers ";
       cin>>a>>b;
        iferror(); //check if error or not to go iferror fucntion 
  
   }
 int Gnum::process_data() //the processing of data which we want to get
   {
       count=0;

    for(int i=1;i<=999;i++)
       {
        
            mul=a*b*i;//if a=7 and b=8 then their mult is 56
                      //then i is increamented n times and
                      // it cross the 1000 if then -a*b then we can get
                      //largest divisible number of two specific number

           if(mul>999) //if mul is larger then 3 digit number
           {
               largest3digit=mul-a*b; //if take 7 and 8 two numbers and then 
                                      //it maximum value is 1008 which is greater then 999 then
                                      // we have to make 3 digit largest so 1008-a*b=952 that's the 
                                      //right answer

               return largest3digit;// return the largest 3 digit value
           }
           count++;
       }

      return 0;
   }

 void Gnum::get_largest3digit() //get largest 3 digit number
   {
           cout<<"The largest 3 digit number of "<<a <<" and "<<b<<" is "<<process_data();
           cout<<endl<<endl<<"The number multiply "<<count<<" times to get 3 digit number of two numbers ";
   }

 void Gnum::iferror() //if user enters error, user gets this message
   {
         if(a>=1000 || b>=1000)
       {
           cout<<"Number should be greater then or equal to 1000 "<<endl;
           exit(1);

       }
       if(a<=-1 || b<=-1 )
       {
           cout<<"Number should not be in negative form "<<endl;
           exit(1);
       }
     if(a==0 || b==0 )
       {
           cout<<"NUmber should not be equal to zero "<<endl;
           exit(1);

       }
   }

int main()
{
    Gnum g1;
    g1.set_data();
    g1.get_largest3digit();
    return 0;

}