
 /*Execute program without using namespace std
 **When we execute this program in all place we have to keep std:: 
 **so using namespace std is better than std:: */
#include <iostream>
int main()
{
	int num;
	std::cout<<"My name is sanam"<<std::endl;
	std::cout<<"I am checking this program without using namespace std "<<std::endl;
	
	std::cout<<std::endl<<"Enter any number ";
	std::cin>>num;
	
	std::cout<<std::endl<<"Number is "<<num;
	return 0;
	
}
