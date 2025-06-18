
//Parameterize constructor
#include <iostream>
#include <conio.h>
using namespace std;

class Car{
	string nameOfCar,address;
	double price;
	public:
		Car(string nameOfCar,string address,double price){
			this->nameOfCar=nameOfCar;
			this->address=address;
			this->price=price;
		}
		void getData(){
			cout<<"Car Name: "<<nameOfCar<<endl;
			cout<<"Address: "<<address<<endl;
			cout<<"Price: $"<<price<<endl;
		}
};

int main(){
	Car car("Telsa","United State",100000);
	car.getData();
	return 0;
}
