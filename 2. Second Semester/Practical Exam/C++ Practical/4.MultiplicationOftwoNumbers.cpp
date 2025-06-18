
//Multiplication of two numbers

#include <iostream>
#include <conio.h>
using namespace std;

class Multiplication{
	int a,b,mul;
	public:
		void setData(){
			cout<<"Enter two numbers ";
			cin>>a>>b;	
		}
		void getData(){
			mul=a*b;
			cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<mul;
		}
};

int main(){
	Multiplication multiplication;
	multiplication.setData();
	multiplication.getData();
}
