
//Opening the file using randome file access
//it opens the file from the last like my name is
//it prints si eman ym 

//Read file from backward

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("CheckEOF","r+");
    if(fp==NULL){
        perror("Error opening file ");
        exit(1);

    }
    //this is all from the file that 
   
        fseek(fp,0,SEEK_END);// goto end of the file 
        fseek(fp,-1,SEEK_CUR);//MOVE back by one character 
        while (ftell(fp)>0)
        {

            ch=getc(fp);//read a character by moving aheaad by one character
            putchar(ch);
            fseek(fp,-2,SEEK_CUR);//move back by two character
            
        }
    fclose(fp);
    return 0;
    
}