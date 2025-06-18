
//WAP  to read and write student data having roll and name using random access file 
//this is the question asked in 2075 BS 

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
    FILE *fp;
     char name[20],ch;
     int roll;

    fp=fopen("StudentData","w");
    if(fp==NULL){
        perror("Error creating the file ");
        exit(0);
    }
    else
    {
        printf("\nEnter name of the student ");
        scanf("%s",&name);
        printf("Enter student's roll no ");
        scanf("%d",&roll);
        fprintf(fp,"%s   %d",name,roll);
    }

    fclose(fp);
    fp=fopen("studentdata","r");
    if(fp==NULL){
        perror("File not found");
        exit(1);
    }
    else
    {
        fseek(fp,0,SEEK_END);
        fseek(fp,-1,SEEK_CUR);
        while(ftell(fp)>0){
            ch=getc(fp);
            putchar(ch);//print the character one by one 
            fseek(fp,-2,SEEK_CUR);
        }
    }
    fclose(fp);
    return 0;

}