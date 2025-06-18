


void AftSaveOpen()
{

    i=0,j=0,k=0,l=0,n=0,m=0,s=0,p=0;

Slen[line]=0,CntAft[space]=0;/*Slen[line]=length of each line
                CntAft[space]=countAfter space*/
  char ch={0};

  FILE *fp;
  fp=fopen(nameoffile,"rb");
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
 fp=fopen(nameoffile,"rb");
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


   }
   else
   {
        printf("Err_opening file  ");
        getch();
        system("cls");
        Wmain();
        write();
   }
   fclose(fp);

 return;

}



