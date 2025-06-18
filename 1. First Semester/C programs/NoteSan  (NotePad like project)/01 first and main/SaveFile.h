

void AftSaveAndSave()
{
     FILE *fp,*fp1,*fp01,*fp2;

    char ch;
    k=0;

    wr[k]='\0';
    fp=fopen("tempSave","a");
    if(fp==NULL)
    {
       perror("Unable to open ");
       system("cls");
       Wmain();
    }
    else
    {
        while(wr[k]!='\0')
         {
          ch=wr[k];
          putc(ch,fp);
          k++;

          }

    }
 fclose(fp);

        k=0;


        fp1=fopen(nameoffile,"rb");
      if(fp1==NULL)
      {
          perror("Unable to open ");
           system("cls");
          Wmain();

      }

         fp01=fopen("tempsave","rb");
      if(fp01==NULL)
      {
          perror("Unable to open ");
           system("cls");
          Wmain();

      }




    wr[k]='\0';
    k=0;
    fp2=fopen("Mergefile","wb");
    if(fp2==NULL)
    {
       perror("Unable to open ");
       system("cls");
       Wmain();
    }
      while(1)
         {
             ch=fgetc(fp);
              if(ch==EOF)
                 {
                     break;
                 }
                 else
                    {
                        putc(ch,fp2);
                    }

          }


        while(1)
         {
             ch=fgetc(fp01);
              if(ch==EOF)
                 {
                     break;
                 }
                 else
                    {
                        putc(ch,fp2);
                    }

          }






    fclose(fp1);
    fclose(fp01);
    fclose(fp2);

      remove(nameoffile);
      rename("Mergefile",nameoffile);

    return;
}
