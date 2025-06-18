//logical unit part we can perform add,mult,div,sub,mod
//endl creates thes new line 
//cout displays the data in consol
// cin takes input from the user 
#include<iostream>
using namespace std;

int main()
{  
    int a,b,add,sub,mul,div,mod;
	cout<<"Enter number 1 ";
	cin>>a;
	cout<<"Enter number 2 ";
	cin>>b;
	
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mod=a%b;
	
	cout<<"Addition "<<add <<endl<<"Subtraction "<<sub<<endl<<"Multipication "<<mul<<endl<<"Division "
	<<div<<endl<<"Modulus "<<mod<<endl;
	return 0;
}
