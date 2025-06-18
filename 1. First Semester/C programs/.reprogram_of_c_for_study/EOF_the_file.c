
//EOF of the file 

#include <stdio.h>
#include <conio.h>
#include <stdlib.h> //it provides to work in exit() function otherwize it display the warning message
int main(){
    FILE *fp;
    char ch;                                      
    fp=fopen("CheckEOF","w");
    if(fp==NULL){
        perror("Error creating the file ");
        exit(1);//if file is error then it returns more then 0 or less then 0
        //if file it's successfully compiled that we returns the value 0

    }
  
     fprintf(fp,"This is the checklist of End Of The file ");

    fclose(fp);

    fp=fopen("CheckEOF","r");
    if(fp==NULL){
     perror("Error opening the file ");
     exit(1);
    }
    else
    {
        while(1){
            ch=getc(fp);//get the character from the file 
            if(ch==EOF){
                //if end of the file then it breaks the loop and it will be the out of loop
                break;
            }
            printf("%c",ch);//pring the character one by one 
        }
    }
    fclose(fp);
    
    return 0;
}