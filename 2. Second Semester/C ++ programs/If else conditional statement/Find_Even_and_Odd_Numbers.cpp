
//Even and odd number 

#include<iostream>
using namespace std;

int main()
{
	int num;
	
	cout<<"Enter number to perform a task ";
	cin>>num;
	
	if(num%2==0)
	//num%2==0 is take input from the user and then 
	//if number is divided by 2 or not if divide by 2
   // it comes 0 or not it comes other values 
	{
		cout<<endl<<num<<", is Even number ";
	}
	else if(num%2!=0)
	//num is not equal ot 0 
	{
		cout<<endl<<num<<", is odd number ";	
	}
	
	return 0;
	
}
