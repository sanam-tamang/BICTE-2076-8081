
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    int roll,i;
    char ch,name[20];

    FILE *fp;
    fp=fopen("Student_record","wb");
    if(fp==NULL){
        perror("Error opening file ");
        exit(1);
    }
    else
    {
        for(i=0;i<2;i++){
            printf("Enter name : ");
            scanf("%s",&name);
            printf("Enter roll ");
            scanf("%d",&roll);
            fprintf(fp,"%s %d",name,roll);

            }

    }
   fclose(fp);

   fp=fopen("student_record","rb");
   if(fp==NULL){
       perror("Error opening opening ");
       exit(1);

   }

   else{
       while(1){
           ch=getc(fp);
           if(ch==EOF){
               break;
           }
              printf("%c",ch);

                  }
   }
   fclose(fp);
   return 0;


      
}