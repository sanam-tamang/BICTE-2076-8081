
//String in c++
//1. Getline(cin,string_name);

#include <iostream>
using namespace std;

class Cppstring
{
    string str;
    public:

    void Set_Info() 
    {
        cout<<"Write something about yourself (Using getline) ";
        getline(cin,str);

    } 

    void Get_Info()
    {
     cout<<endl<<"YOur information is showing "<<endl;
     cout<<endl<<str;
    }
};

int main()
{
    Cppstring cpp;
    cpp.Set_Info();
    cpp.Get_Info();
    return 0;
}