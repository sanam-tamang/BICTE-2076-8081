
#include <iostream>
using namespace std;

int main()
{
	string name;
	int num;
	
	name="Sanam";//giving string data in the name 
	cout<<endl<<name<<",Enter how many times do you want to print your name ";
	cin>>num;
	
	for(int i=0;i<num;i++)
	{/*i+1 means your number is not increamented by same number 
	  it increamented by 1 plus value*/
		cout<<endl<<name<<" -->> "<<i+1;
	}
}
