
/*Reverse the numbers
I am using class cause of c++ is oop 
and to make a better program I'll do it*/

#include <iostream>
#include <conio.h>

using namespace std;

class Renum{
	//these all members are private specifier by default 
    private:
    	/*We can't perform (Ex. int n=10,rev=0; ) like this at the initialization point 
		otherwise it shows warning */
	int num,temp,rem,rev;
	
	public:
		void input(int tnum)
		{
		   num=tnum;
		   rev=0;
		   
		   //After reverse value old value is change and we can't get it so we use temp to store input value 
		   temp=tnum;
		   while(num>0)
		   {
		   	rem=num%10;
		   	rev=rev*10+rem;
		   	num=num/10;
		   	
		   }
		   	
		}
		 void display()
		 {
		 	cout<<"\n The reverse number of "<<temp<<" is "<<rev;
		 }
	
};

int main()
{
	Renum r;
	int Num;
	
	cout<<"\nEnter number to do reverse task: ";
     cin>>Num;
     r.input(Num);
     r.display();
     return 0;
    
}
