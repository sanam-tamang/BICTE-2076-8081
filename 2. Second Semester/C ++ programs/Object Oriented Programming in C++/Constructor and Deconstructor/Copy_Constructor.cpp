
//Copy constructor
//i actually don't understant what code doing
#include <iostream>
#include <conio.h>
using namespace std;

//class started
class Copy_constructor{

private:
int x,y;

public:
Copy_constructor(int x1,int y1){ //when copy_construction parameter it is called this 
    x=x1;//copy x1 value to x 
    y=y1;// copy y1 value to y 
    
}
Copy_constructor(const Copy_constructor &c2){//when we copy the data it is called
    
    x=c2.x;
    y=c2.y;
    
}
    int getX(){
        //returning value of x 
        return x;
    }
    int getY(){
        //returning value of y
        return y;
    }
};

int main(){
    Copy_constructor c1(10,20);
    Copy_constructor c2=c1;//copy c1 value to c2
    //Checking output of program
    cout<<"c1.x = "<<c1.getX()<< ", p1.y = "<<c1.getY();
    cout<<endl<<"c2.x = "<<c2.getX()<< ", p2.y = "<<c2.getY();

    return 0;

}