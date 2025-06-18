
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
    char str[50],dkey[20],rkey[20][10];
    printf("\nEnter a string: ");
    gets(str);
    int i,j,k;
    i=j=k=0;

    printf("\nEnter which word do wanna delete from the string: " );
    scanf("%s",dkey);

    for(i=0;i<=str[i]!='\0';i++){
        if(str[i]==' '){
            rkey[j][k]='\0';
            j++;//how many spaces there
            k=0;//after space value should be void 

        }
        else
        {//it does not save the space data
           rkey[j][k]=str[i];
           k++;
        }
    }

    rkey[j][k]='\0';

    for(i=0;i<=j;i++){
        if(strcmp(rkey[i],dkey)==0){
            for(k=i;k<=j;k++){
                strcpy(rkey[k],rkey[k+1]);
                j--;
            }
        }
          
    }

    for(i=0;i<=j;i++){
        printf("%s ",rkey[i]);

    }
    return 0;
}