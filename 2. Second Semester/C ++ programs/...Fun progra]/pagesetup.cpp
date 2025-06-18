
//Admin and Editor Works

/*
=>Admin Can do all the things 
   -add or remove editor
   -Posting
   -Message

=> Editor can not do everything. he or she only can do 
   -Posting
   -Message

*/

//this is jut for fun I incomplete it

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Editor{

protected:
string editor_name;
string post;
string message;
public:

 void post_image()
{
  cout<<"You successfully Post the image ";

}
 void message_chat()
{
   cout<<"Chat success ";
}


};

class Admin: public Editor{
    public:
string Add,remove,page;  //add or remove editor
public:
void Page_Name()
{
    cout<<"Enter your page name ";
    cin>>page;
}
void add_editor()
{
    cout<<endl<<endl<<page<<endl<<endl;
   cout<<"Enter editor name ";
   cin>>editor_name;
}

void remove_editor()
{
    cout<<editor_name<< " Is successfully remove from editor list ";

}

void post_image()
{
  cout<<"You successfully Post the image from admin ";

}
void message_chat()
{
   cout<<"Chat success From editor  ";
}

};


int main()
{int in;
    Admin a;
    a.Page_Name();
    cout<<"Do you want to setup your editor (0/1) ";
    
    cin>>in;
    if(in==1)
    {
       //if want to set editor
       a.add_editor();

    }
    else{
        
    }

    return 0;
}