

/*inline keyword is used for making specific function faster while they call
**compiler already know that this function is exist in the program that when they call
**function can immediately work */

#include <iostream>
#include <conio.h>

using namespace std;

class Student
{
    private:
    int roll;
    char name[25];

    public:
//declaration of memeber function inside of the class
    void display();
    void getdata();

};
//working outside of class 

inline void Student::getdata(){
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter roll no ";
    cin>>roll;
}

inline void Student::display(){
    cout<<endl<<"Displaying the data of the student "<<endl<<endl;
    cout<<"Student name: "<<name;
    cout<<endl<<"Roll no: "<<roll;

}

int main(){
    Student s1;
    s1.getdata();
    s1.display();
    return 0;
}