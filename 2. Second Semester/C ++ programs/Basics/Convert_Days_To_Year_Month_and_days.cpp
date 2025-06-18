#include<iostream>
using namespace std;

int main()
{
	int year,month,day,tempdays;
	cout<<"Enter days ";
	
	cin>>tempdays;//store data in tempdays
	
	//a year is 365 days 
	year=tempdays/365;
	// 1 month is 30 days 
	month=tempdays%365/30;
	
	day=tempdays%365%30;
	
	cout<<endl<<"year/ month/ day"<<endl;
	
	cout<<year<<"/ "<< month <<"/ "<< day;
	return 0;
}
