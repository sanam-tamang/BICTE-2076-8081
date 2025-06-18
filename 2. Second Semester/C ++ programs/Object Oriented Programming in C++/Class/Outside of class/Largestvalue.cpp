
//Array of object

#include <iostream>
#include <conio.h>
using namespace std;
class largest{

    private:
    int a,b;
    public:
    void getdata();
    int largestdata();
    void displaydata();

};

void largest:: getdata(){
    cout<<"Enter numbers ";
    cin>>a>>b;
    
}

int largest::largestdata(){
    //returns one of the largest value among two 
    if(a>=b){
        return a;
    }
    else{
        return b;
    }
}

void largest::displaydata(){
    if(largestdata()>=largestdata())
    {
         cout<<endl<<"The largest value is "<<largestdata()<<endl;
 
    }
   
}
int main(){ 
   int i;
    largest l1[2];

    for(i=0;i<2;i++){
   l1[i].getdata();
    }
    for(i=0;i<2;i++){
          l1[i].largestdata();
    
          l1[i].displaydata();
    }
    
    return 0 ;

}
