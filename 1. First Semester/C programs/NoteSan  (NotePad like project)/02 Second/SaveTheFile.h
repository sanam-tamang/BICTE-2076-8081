
void SaveTheFile()
{  char ch;
    FILE *fp1;
    k=0;

       fp1=fopen(nameoffile,"w+");/*writes many files and
       appends the file  if a only there will be
       mistake and  double value shown  */
       if(fp1==NULL)
       {
           printf("Unable to create %s file ",nameoffile);
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



