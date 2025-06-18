

void Draw_Opening()
{
   for(i=0;i<xx;i++)
   {  gotoxy(5,i);
       for(j=0;j<yy;j++)
       {
          printf("%c",MapOfO[i][j]);
       }
   }

}


void Area_Of_Opening()
{

    for(i=0;i<xx;i++)
    {
        for(j=0;j<yy;j++)
        {
           if(i==0 || i==xx-1 || i==xx-4)
           {
                MapOfO[i][j]=176;
           }
           else if(j==0 || j==yy-1 )
           {
             MapOfO[i][j]=176;
           }
           else
           {
               MapOfO[i][j]=' ';
           }
        }
    }
}

