


void Draw_Area_Of_Note()
{
    gotoxy(5,25);

    SetColor(3);
    for(i=0;i<r;i++)
    {/*row of above*/
         gotoxy(i,y-(y-5));
         printf("%c",205);
    }
    /*first row first bend*/
     gotoxy(0,y-(y-5));
     printf("%c",201);

      /*first row 2nd bend*/
      gotoxy(r,y-(y-5));
     printf("%c",187);

    for(i=0;i<r;i++)
    {/*2nd row */
         gotoxy(i,y-(y-7));
         printf("%c",205);
    }


     for(i=0;i<r;i++)
    {/*last row*/
         gotoxy(i,c+tempcount);
         printf("%c",205);
    }

     for(i=y-(y-6);i<c+tempcount;i++)
    {/*column of Left*/
         gotoxy(0,i);
         printf("%c",186);
    }

     /*Left column last row  first bend */
    gotoxy(0,c+tempcount);
     printf("%c",200);

     /*Right column last row  2nd bend*/
     gotoxy(r,c+tempcount);
     printf("%c",188);

     for(i=y-(y-6);i<c+tempcount;i++)
    {/*column of Right*/
         gotoxy(r,i);
         printf("%c",186);
    }

   /*2nd row Left column first bend */
    gotoxy(0,y-(y-7));
     printf("%c",204);
  /*2nd row  Right column 2nd bend */
     gotoxy(r,y-(y-7));
     printf("%c",185);


    for(i=0;i<r;i++)
    {/*3nd row */
         gotoxy(i,y-(y-12));
         printf("%c",205);
    }

    /*3nd row Left column first bend */
    gotoxy(0,y-(y-12));
     printf("%c",204);
  /*3nd row  Right column 2nd bend */
     gotoxy(r,y-(y-12));
     printf("%c",185);


   for(i=y-(y-12);i<c+tempcount;i++)
    {
        /*column of Middle*/
         gotoxy(x-(x-8),i);
         printf("%c",186);
    }

      /*Middle column third row  first bend */
    gotoxy(x-(x-8),12);
     printf("%c",203);

     /*Middle column last row  2nd bend*/
     gotoxy(x-(x-8),c+tempcount);
     printf("%c",202);

     return;

}

