
/*
Now this is okay*/
void OpenedFileSave()
{
   char ch;
    FILE *fp1,*fp2,*fp3,*fp4;
    k=0;


    fp1=fopen(Ovaluesave,"rb");
    fp2=fopen("BackUP","w+");
       if(fp2==NULL)
       {
          ;
       }
       else
       {
        while(1)
         {
             ch=fgetc(fp1);
             if(ch==EOF)
             {
                 break;
             }
             else
             {
                 fputc(ch,fp2);
             }


          }

       }
       fclose(fp1);
       fclose(fp2);


     fp1=fopen(Ovaluesave,"w+");
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


       /*


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
        fp4=fopen("Merge","w");


     if(fp2==NULL)
     {
         printf("Unable to open %s file ",Ovaluesave);
         getch();

     }
          if(fp3==NULL)
     {
         printf("System Err_ Unable to open ");
         getch();

     }

     if(fp4==NULL)
     {
        printf("System Err_ Unable to save ");
        getch();

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
    rename("Merge",Ovaluesave);*/

}

