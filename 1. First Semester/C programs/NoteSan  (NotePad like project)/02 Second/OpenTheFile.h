
void OpenTheFile()

{


    i=0,j=0,k=0,l=0,n=0,m=0,s=0,p=0;

Slen[line]=0,CntAft[space]=0;/*Slen[line]=length of each line
                CntAft[space]=countAfter space*/
  char ch;

  FILE *fp;


  Wmain();
    gotoxy(x,y+m);
 fp=fopen(tempsave,"rb");
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
           gotoxy(x,y+m);
             n=0;

            printf("%c",ch);
             ch=wr[k];
             n++;
             Slen[l]++;
             k++;


        }
       else if( ch=='\n' || ch=='\r' )
        {

          Slen[l]++;

           l++;
           m++;
          gotoxy(x,y+m);
           n=0;
        }

       else if(n==(c-12) || Slen[l]==(c-12))
        {
            Slen[l]++;

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
        printf("Unable to save %s file ",tempsave);
        getch();
        Wmain();

   }
   fclose(fp);

 return;

}
