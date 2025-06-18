
//Encapsulation
#include <iostream>
#include <conio.h>
using namespace std;

class StudentInfo{
	private:
		string name,address;
		int rollno;
	public:
		void setData(string name,string address,int rollno){
		  this->name=name;
		  this->address=address;
		  this->rollno=rollno;
		}
		void getData(){
		    cout<<"Name: "<<name<<endl;
		    cout<<"Address: "<<address<<endl;
		    cout<<"Rollno: "<<rollno<<endl;
		}	
};

int main(){
	StudentInfo student1;
	student1.setData("Sanam Tamang","Sundarharaincha-12",14);
	student1.getData();
	return 0;
}
