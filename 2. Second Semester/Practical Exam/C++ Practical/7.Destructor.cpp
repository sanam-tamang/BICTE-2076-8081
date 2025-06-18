//Destructor
#include <iostream>
#include <conio.h>
using namespace std;

class Information{
	public:
		Information(){
			cout<<"Constructor is called ";
		}
		~Information(){ 
			cout<<endl<<"Destrutor is called ";
		}
};

int main(){
	Information info;
	return 0;
}
