
/*this place have bug*/
void OpenedFileSave()
{
   char ch;
    FILE *fp1,*fp2,*fp3,*fp4;
    k=0;


       fp1=fopen("temp","w+");
       if(fp1==NULL)
       {
          printf("System Err_ unable to save the file ");
           getch();
           Wmain();
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
       fclose(fp1);




      fp2=fopen(Ovaluesave,"rb");
       fp3=fopen("temp","rb");


     if(fp2==NULL)
     {
         printf("Unable to open %s file ",Ovaluesave);
         getch();
         Wmain();
     }
          if(fp3==NULL)
     {
         printf("System Err_ Unable to open ");
         getch();
         Wmain();
     }

     fp4=fopen("Merge","w");
     if(fp4==NULL)
     {
        printf("System Err_ Unable to save ");
        getch();
         Wmain();
     }

     while(1)
     {
         ch=fgetc(fp2);
         if(ch==EOF)
         {
             break;
         }
         fputc(ch,fp4);

     }

      while(1)
     {
         ch=fgetc(fp3);
         if(ch==EOF)
         {
             break;
         }
         fputc(ch,fp4);

     }
      fclose(fp2);
    fclose(fp3);
     fclose(fp4);


     tempsave=Ovaluesave;
     remove(Ovaluesave);
     remove("temp");
    rename("Merge",Ovaluesave);


}

