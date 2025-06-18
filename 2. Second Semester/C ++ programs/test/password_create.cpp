
//Entering password

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class CreatePass{

    int i;
    char password[30]={0},pass[20];
    public:
    CreatePass(){i=0;}
    void set_data()
    {
       cout<<"Enter password ";
    /*
       while(1)
       {   password[i]=getch();
          if(password[i]=='\r')
          {
              break;
          }
          else if(password[i]=='\b')
              { cout<< " ";
                 cout<<"\b";
                 cout<<" ";
                 password[i];
                  i--;
              }
              else{
                   cout<<"*";
                 
                  password[i];
                   i++;
                  
              }
             
          
       }*/
       while(10)
      {       pass[i]=getch();
              strcpy(password,pass);
            if(pass[i]=='\r')
               {
                /*if u heat enter then this works*/
                break;
               }
               else if(pass[i]=='\b')
               {
                if(i!=0)
                    {
                        i--;
                       cout<<"\b \b";
                     }

                else{
                       
                       cout<<"\a";
                    }
               }
               else
               {
                   i++;
                   cout<<"*";
               }
   }
     pass[i]='\0';

    }

    void get_data(){
        cout<<endl<<endl<<"Password:" <<password;
    }


};


int main()
{
    CreatePass c;
    c.set_data();
    c.get_data();
    return 0;

}