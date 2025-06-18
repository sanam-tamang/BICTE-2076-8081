
void SaveTheFile()
{  char ch;
    FILE *fp1;
    k=0;

       fp1=fopen(nameoffile,"w+");
       if(fp1==NULL)
       {
           printf("Unable to save %s file ",nameoffile);
       }
       else
       {
        while(wr[k]!='\0')
         {
          ch=wr[k];
          putc(ch,fp1);
          k++;

          }

       }

   ifsaved=1;

    fclose(fp1);

   return;
}



