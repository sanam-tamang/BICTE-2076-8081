
#include <iostream>
#include <conio.h>
#include<string.h>
using namespace std;

class WorkersInfo{
	string name,address;
     string phoneno;
	public:
		void setData(string name,string address,string phoneno){
			this->name=name;
			this->address=address;
			this->phoneno=phoneno;
		}
		string getName();
		string getAddress();
		string getPhoneno();
     
};

    string WorkersInfo::getName(){
		return name;
		}
	string WorkersInfo::getAddress(){
		return address;
		}
	string WorkersInfo::getPhoneno(){
		return phoneno;
		}

int main(){
	WorkersInfo worker1;
	//if we used phone number in interger form it won't show the correct value and
	//  shows overflow in implicit constant conversion 
	worker1.setData("Hari Bahadur","Sundarharaincha-12","9812345678");
	cout<<"Name: "<<worker1.getName()<<endl;
	cout<<"Address: "<<worker1.getAddress()<<endl;
	cout<<"Phoneno: "<<worker1.getPhoneno()<<endl;
	
}
