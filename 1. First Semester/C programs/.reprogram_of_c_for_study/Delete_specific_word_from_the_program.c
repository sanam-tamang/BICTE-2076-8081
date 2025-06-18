
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
    char str[100],delw[20],kstr[10][20];
    int i,j,count,k;
    i=j=count=k=0;
    printf("\nEnter string ");
    gets(str);
    printf("\nEnter deleted word from the string ");
    gets(delw);

    for(i=0;i<=str[i]!='\0';i++){
        if(str[i]==' '){
            kstr[k][j]='\0';
            k++;//this counts how many spaces have in the program
            j=0;// after putting data of j in kstr it will be zero when space met the program
           
        }
        else
        {
           kstr[k][j]=str[i];
           j++;//the each letter counter when space is execute again it starts with zero
        }
        
        
    }
    kstr[k][j]='\0';
    //compares the string with given words

    for(i=0;i<=k;i++){
        if(strcmp(kstr[i],delw)==0){
            for(j=i;j<=k;j++){
                strcpy(kstr[j],kstr[j+1]);
                k--;
            }
        }
    }

    for(i=0;i<=k;i++){
        printf("%s ",kstr[i]);
    }
    return 0;
}