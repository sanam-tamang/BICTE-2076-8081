
//File Handling 
#include <stdio.h>
#include <conio.h>

int main(){
 
    FILE *fp;
    char str[50];//
    fp=fopen("IloveU.txt","w");
    if(fp==NULL){
        perror("Error Opening file ");

    }
    else{
        printf("Write anything about with whom you love ");
        gets(str);
        fprintf(fp,"%s",str);

    }
    fclose(fp);
return 0;
}