
void Draw_AreaOfNote()
{
   for(i=0;i<r;i++)
   {  gotoxy(5,i+5);
       for(j=0;j<c;j++)
       {
          printf("%c",MapOfNote[i][j]);
       }
   }
   return;
}


void AreaOfNote()
{

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           if(i==0 || i==r-1 || i==r-(r-5))
           {
               MapOfNote[i][j]=176;
           }
           else if(j==0 || j==c-1)
           {
             MapOfNote[i][j]=176;
           }
           else
           {
               MapOfNote[i][j]=' ';
           }
        }
    }
}

