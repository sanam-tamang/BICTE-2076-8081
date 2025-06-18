
void OpenTheFile()
{
    i=0,j=0,k=0,l=0,n=0,m=0,s=0,tl=1;
    tempcount=0;
   Slen[l]=0,CntAft[s]=0;
   int templ=0;

  char ch;

  FILE *fp;
fp=fopen(tempsave,"rb");
 if(fp==NULL)
 {
     ;
 }
 else
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
            if(ch=='\n' || ch=='\r')

           {

                 tempcount++;
                 tl++;
                 templ=0;

           }

           else if(templ==(r-12))
           {
               tl++;
               tempcount++;
               templ=0;
           }
           else{
                templ++;

           }


        }
     }

    if(tempcount<=50)
        {
            tempcount=0;
        }
        else
        {
            tempcount=tempcount-50;
        }



   }
   fclose(fp);

    Wmain();
    SetColor(13);
 gotoxy(x-(x-10),y-(y-13)+m);

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

       if(ch=='\n' || ch=='\r')
        {

           Slen[l]++;

           l++;
           Slen[l]++;
           k++;
           m++;

          gotoxy(x-(x-10),y-(y-13)+m);
           n=0;

        }


         else if(n==(r-12) || Slen[l]==(r-12))
        {

           Slen[l]++;

           m++;
          gotoxy(x-(x-10),y-(y-13)+m);
            printf("%c",ch);
             ch=wr[k];
             n++;
             l++;

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
       ;
   }
   m=m+1;
   l=l+1;
   gotoxy(x-(x-10),y-(y-13)+m);



   fclose(fp);

 return;

}
