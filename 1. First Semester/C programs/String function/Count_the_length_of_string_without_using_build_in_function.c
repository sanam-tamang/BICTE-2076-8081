
//count string without using build-in function

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){

    char cstring[40];
    int i=0,length=0;

    printf("Enter the string ");
    gets(cstring);
  //this counts each and every words of the string
    for(i=0;i<cstring[i]!='\0';i++)
    {
      length++;
    }

    printf("The length of string %s is =%d ",cstring,length);

    return 0;

}