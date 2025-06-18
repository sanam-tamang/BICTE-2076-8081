


void Draw_Area_Of_Note()
{

   gotoxy(x-(x-3),68);
    for(i=(x-(x-3));i<r;i++)
    {/*row of above*/
         gotoxy(i,y-(y-5));
         printf("%c",205);
    }
    /*first row first bend*/
     gotoxy(x-(x-3),y-(y-5));
     printf("%c",201);

      /*first row 2nd bend*/
      gotoxy(r,y-(y-5));
     printf("%c",187);

    for(i=(x-(x-3));i<r;i++)
    {/*2nd row */
         gotoxy(i,y-(y-7));
         printf("%c",205);
    }


     for(i=(x-(x-3));i<r;i++)
    {/*last row*/
         gotoxy(i,c+tempcount);
         printf("%c",205);
    }

     for(i=y-(y-6);i<c+tempcount;i++)
    {/*column of Left*/
         gotoxy((x-(x-3)),i);
         printf("%c",186);
    }

    /*Left column last row  first bend */
    gotoxy(x-(x-3),c+tempcount);
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
    gotoxy(x-(x-3),y-(y-7));
     printf("%c",204);
  /*2nd row  Right column 2nd bend */
     gotoxy(r,y-(y-7));
     printf("%c",185);


    for(i=(x-(x-3));i<r;i++)
    {/*3nd row */
         gotoxy(i,y-(y-12));
         printf("%c",205);
    }

    /*3nd row Left column first bend */
    gotoxy(x-(x-3),y-(y-12));
     printf("%c",204);
  /*3nd row  Right column 2nd bend */
     gotoxy(r,y-(y-12));
     printf("%c",185);




}

