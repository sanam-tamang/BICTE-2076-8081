

#include <iostream>
#include <conio.h>
using namespace std;

class Counter{
	int count;
	public:
		Counter(){
			count=0;
		}
		void operator++(){
			++count;
		}
		void getData(){
			cout<<"Number is: "<<count<<endl;
		}
};

int main(){
	Counter count;
	count.getData();
	++count;
	++count;
	count.getData();
	
}
