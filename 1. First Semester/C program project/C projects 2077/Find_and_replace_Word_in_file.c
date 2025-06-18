
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *fp,*fp2;
    char word[150],replace[150],ch,read[150];
    fp=fopen("Cprogramming.txt","r");
    fp2=fopen("Cdefination.txt","w+");
    if(fp==NULL || fp2==NULL)
    {
        printf("Can't open file ");
        exit(0);
    }
    printf("The content of file is shown below \n");
    while(1){
        ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    printf("\n\nEnter the word to find: ");
    fgets(word,150,stdin);
    word[strlen(word)-1]=word[strlen(word)];
    printf("Enter the word to replace it with : ");
    fgets(replace,150,stdin);
    replace[strlen(replace)-1]=replace[strlen(replace)];
    fprintf(fp2,"%s -%s \n ",word,replace);
    rewind(fp);
    while(!feof(fp))
    {
        fscanf(fp,"%s",read);
        if(strcmp(read,word)==0)
        {
            strcpy(read,replace);
        }
        fprintf(fp2,"%s ",read);
    }
     rewind(fp2);
     while(1)
     {
         ch=fgetc(fp2);
         if(ch==EOF)
         {
             break;
         }
         printf("%c",ch);
     }
     fclose(fp);
     fclose(fp2);
     return 0;
}
