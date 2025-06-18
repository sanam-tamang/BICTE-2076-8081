
void OpenTheFile()
{
    i=0,j=0,k=0,l=0,n=0,m=0,s=0,tl=0;
    tempcount=0;
Slen[l]=0,CntAft[s]=0;

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
            if(ch=='\r' || ch=='\n')
           {

                 tempcount++;
                 tl++;
           }
        }
     }
 }
 fclose(fp);

if(tempcount<=50)
{
    tempcount=0;
}
  if(tl>=50)
  {
      tl=tl+25;
  }

   Wmain();
     gotoxy(x-(x-6),y-(y-13)+m);
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

       if(ch=='\r' || ch=='\n')
        {
           Slen[l]++;
           k++;

           l++;
           m++;

          gotoxy(x-(x-6),y-(y-13)+m);
           n=0;
        }


         else if(n==(r-8)  || Slen[l]==(r-8) )
        {
           Slen[l]++;
           l++;
           m++;
          gotoxy(x-(x-6),y-(y-13)+m);
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

      if(tl==0)
      {
          gotoxy(x-(x-6)+Slen[l],y-(y-13)+m);
      }


   }

   else
   {
       ;
   }


   fclose(fp);

 return;

}
