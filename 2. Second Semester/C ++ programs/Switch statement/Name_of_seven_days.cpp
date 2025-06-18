
//Switch case statement 
// swich statement is like the if else
// but it is more easier and faster than if else 

#include<iostream>
#include <conio.h>
using namespace std;

int main()
{
	int day;
	cout<<"Enter number of days ";
	cin>>day;
	
	switch(day)
	{
		case 1:
			cout<<endl<<"Sunday";
			break;
		case 2:
			cout<<endl<<"Monday ";
			break;
		case 3:
			cout<<endl<<"Tuesday";
			break;
		case 4:
			cout<<endl<<"Wednesday";
			break;
	
		case 5:
			cout<<endl<<"Thusday";
			break;
		case 6:
			cout<<endl<<"friday ";
			break;
		case 7:	
			cout<<endl<<"Saturday ";
			break;
		default:
			cout<<endl<<"invalid input ";
		    break;		
}

}
