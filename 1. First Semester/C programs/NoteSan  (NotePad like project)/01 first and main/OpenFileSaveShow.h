

void OpenFileSaveShow()
{
  char ch;


  FILE *fp;
  fp=fopen(openfilename,"rb");
  if(fp==NULL)
  {
      printf("File Does not Exist ");
      getch();
      system("cls");
      Wmain();
      write();
  }
  fclose(fp);


  system("cls");
  Wmain();
    gotoxy(x,y+m);
 fp=fopen(openfilename,"rb");
 if(fp!=NULL)
 {

      while(1)
      {
          ch=fgetc(fp);
          if(ch==EOF)
          {
              break;
          }
          else
          {

        if(n==89 && wr[k]==' ' ||  Slen[l]==89  && ch==' ')
        {
           l++;
           m++;
           gotoxy(x,y+m);

           n=0;
        }
       else if(wr[k]=='\n' || wr[k]=='\r' || ch=='\n' || ch=='\r')
        {
          k++;
          Slen[l]++;

           l++;
           m++;
          gotoxy(x,y+m);
           n=0;
        }

       else if(n==90 || Slen[l]==90)
        {

           l++;
           m++;

           gotoxy(x,y+m);

            printf("%c",ch);
             ch=wr[k];
             n++;
             Slen[l]++;
             k++;

           n=0;

         }
         else
         {

             printf("%c",ch);
             ch=wr[k];
             n++;
             Slen[l]++;
             k++;
         }


        }

      }
      write();

   }
   else
   {
        printf("Err_opening file  ");
   }
   fclose(fp);

 return;

}

