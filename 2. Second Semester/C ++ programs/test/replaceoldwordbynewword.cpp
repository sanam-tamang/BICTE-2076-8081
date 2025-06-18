
//delete the old word by new word it not working 
#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;
class WordT
{
   private: 
   char newword[50],oldword[50],str[200],tstr[200];
   int i=0,j=0,len=0;
   public:
  
   void Get_data()
   {
      cout <<"Enter the about yourself ";
      gets(str);
      cout <<"Enter the word to find out ";
      cin>>oldword;
      cout <<"Enter replacing word ";
      cin >>newword;
     len=strlen(str);
   }

   void Set_data()
   {
       while(len>=0)
       {
           if(str[i]!=0)
           {
             tstr[j]=str[i];
             j++;
           }
           if(str[i]==' ' || str[i]=='\0')
           { //if string have a space 
               tstr[j]='\0';
               if(strcmp(str,tstr)==0)
               {
                   cout <<newword;
                   cout <<" ";
               }
               else
               
                   cout <<tstr;
                     cout <<" ";
                   j=0;
               
               i++;
               len--;

           }
       }

   }
};

int main()
{
    WordT w1;
    w1.Get_data();
    w1.Set_data();
    return 0;
}