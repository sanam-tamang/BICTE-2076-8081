// its work successfully 

#include <stdio.h>
#include <conio.h>

void  print_on_consol(){
    char ch;
    FILE *fp;
    int i;
    fp=fopen("Testfile.dat","r");
    if(fp==NULL){
        perror("File not found in the directory ");
        

    }
    else
    {
        
    while(1)
     {
         ch=fgetc(fp);
         if(ch==EOF){
             break;
         }
         printf("%c",ch);

     }

    }
    fclose(fp);
    return;
    

}

int main(){
    FILE *fp;
    char str[250];

    fp=fopen("Testfile.dat","w");
    if(fp==NULL){
        perror("\nUnknow activities done by compiler ha ha//this is just for fun baby ");
    
    }
    else
    {
        printf("\nDescribe a short paragraph about c programming language. ");
        gets(str);
        fprintf(fp,"%s",str);      
    }
       fclose(fp);


    print_on_consol();
    return 0;
}