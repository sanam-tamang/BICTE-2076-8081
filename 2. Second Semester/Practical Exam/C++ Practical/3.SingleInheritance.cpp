
//Single Inheritance
#include <iostream>
#include <conio.h>
using namespace std;

class Information{
	protected:
	string name;
	int age;
};

class Worker:public Information{
	public:
		void setData(){
			cout<<"Enter your name: ";
			cin>>name;
			cout<<"Enter your age: ";
			cin>>age;
		}
		void getData(){
			cout<<"Name: "<<name<<endl;
			cout<<"Age" <<age;
		}
};

int main(){
	Worker worker;
	worker.setData();
	worker.getData();
}
