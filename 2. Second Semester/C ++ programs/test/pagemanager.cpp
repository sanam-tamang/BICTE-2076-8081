
// FB page manager in consol application 
//why I do different different class
//why not same class in this program basically
//there is two type of person one is admin and another is editor
//admin and editor work is same in some place but
//editor cannot edit page name 
//like that

#include <iostream>
#include <conio.h>
using namespace std;

class Page_name
{  
    string page_n;
    public:
    void set_page_name()
    {
        cout<<endl<<"Enter page name ";
        cin>>page_n;
    }

    string get_page_name()
    {
        return page_n;
    }
};


class Edit
{
   public:
  void Edit_the_page()
   {
       cout<<endl<<"Page is being edited ";
   }
};
class Post
{
    public:
       void Post_image_video()
       {
         cout<<endl<<"Successfully post is done ";
       }

};
       
    
class Editor:public Post,public Edit
{   char ch;
    Page_name p1; //to access page name 
    public:
    void Editor_Work()
    {  
        cout<<"Hey Editor What do you want Post(P),Edit(E) in page "<<p1.get_page_name();
         ch=getch();
        if(ch=='p')
        {
            Post::Post_image_video();
          
        }
        else if(ch=='e')
        {
             Edit::Edit_the_page();
           
        }
        else
        {
            cout<<endl<<"Wrong type ";
        }
        
         return ;
       
    }
   
};
class Admin:public Post,public Edit,public Page_name
{  
char ch;

    public:
    void page_setup()
    {
        Page_name::set_page_name();//goess throught this function 

    }
    void Admin_Work()
    {  
        cout<<"Hey Admin What do you want Post(P),Edit(E) of your page "<<Page_name::get_page_name();
        ch=getche();
        if(ch=='p')
        {
            Post::Post_image_video();
        }
        else if(ch=='e')
        {
             Edit::Edit_the_page();
            
        }
        else
        {
            cout<<"Wrong type ";
        }
        
       return ;
    }
};

int main()
{  char ch;
    Admin a;
  
    Editor e;
    a.page_setup();
    cout<<"which work do you want to perform (EDitor =E) or (Admin =A) ";
    ch=getch();
    if(ch=='e')
    {
     e.Editor_Work();
    }
    else if(ch=='a')
    {
        a.Admin_Work();
    
    }
    else{
        cout<<endl<<"You wrong type here please try again ";
        }

        return 0;
   
}