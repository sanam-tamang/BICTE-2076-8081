
//Parametarize Constructor

#include <iostream>
#include <conio.h>

using namespace std;
class ParametarizeConstructor{
	public:
		ParametarizeConstructor(string name,int age){
			cout<<"Your name is "<<name<<" Your age is "<<age;
		}
};
int main(){
	ParametarizeConstructor("Sanam",18);
	return 0;
}
