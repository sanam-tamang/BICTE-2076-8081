


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
      printf("%s File Does not Exist ",nameoffile);
      getch();
     Wmain();
      writeTheFile();
  }


   fclose(fp);
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

        if( Slen[l]==(c-13) && ch==' ' || n==(c-13) && ch==' ')
        {
            Slen[l]++;

           l++;
           m++;
            n++;
           gotoxy(x,y+m);

            printf("%c",ch);
             ch=wr[k];

             Slen[l]++;
             k++;

           n=0;
        }
       else if( wr[k]=='\r' || wr[k]=='\n'  || ch=='\r' || ch=='\n'  )
        {

          Slen[l]++;
          k++;

           l++;
           m++;
          gotoxy(x,y+m);
           n=0;
        }

       else if(n==(c-12)  || Slen[l]==(c-12) )
        {
            Slen[l]++;
            k++;

           l++;
           m++;
          gotoxy(x,y+m);
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
        printf("Unable to save %s file ",nameoffile);
        getch();
        Wmain();
         writeTheFile();
   }
   fclose(fp);

 return;

}



