
#include <iostream>
#include <conio.h>

using namespace std;

class Student_info{

 struct student{ // creating structure within class 
  string name;
  int roll; 
 
 }; //end of struct
 //typedef student student;
 public:

 student s1; // structure object created 

 Student_info();

 void set_data()//taking input from user 
 {
     
       cout<<"Enter student's name ";
       cin>>s1.name;
       cout<<"Enter student's roll ";
       cin>>s1.roll;
      
       if(s1.roll<=0 ) //when user enter negative value //character //or zero its come here
       {
           cout<<"Roll number is wrong \nplease try again ";
           exit(1);
       }

 }
 string get_school_name()
 {
     return "Mahendra Ma.vi";
 }

 string get_name() //get name
 { //the benifits of only giving return is that you can use this in another place to display different outputs
   return s1.name;
 }
 int get_roll() // get roll 
 {
       return s1.roll;
 }

};
 Student_info ::  Student_info()
{
   s1.name="NULL";
    s1.roll=0;
}

int main()
{
   Student_info c1;
   c1.set_data();
   cout<<endl<<c1.get_school_name()<<" students' information is showing below ";
   cout<<endl<<"Name: "<<c1.get_name();
   cout<<endl<<"Roll: "<<c1.get_roll();
   return 0;
}