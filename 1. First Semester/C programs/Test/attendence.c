
/*this program have still bugs in some */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>

int Menu();
void cls();
void gotoXY(int x,int y);
void Add_ID();
void Delete_ID();
void Modify_ID();
void Ascend_ID_Display();
void Attendence();
void Search_ID();
 int i=0;
#define MAX 100
 typedef struct
{
   char ID[15],name[30],grade[15],time[15],address[25],phone_no[15],parent[20];

}Attendence_record;
Attendence_record temp_rec,At[MAX];

int main()
{
   Menu();
   return 0;
}
void gotoXY(int x,int y)
{
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void cls()
{
   int i,j;
   for(i=0;i<75;i++)
   {
       printf("\n");
       for(j=0;j<100;j++)
       {
           printf(" ");
       }
   }
}
int Menu()
{
    int choose;
    system("cls");
      gotoXY(2,1);
   printf("*****Welcome To this Attendence record system*****");
   gotoXY(2,3);
   printf("Add             [1]");
    gotoXY(2,4);
   printf("Search          [2]");
    gotoXY(2,5);
   printf("Modify          [3]");
    gotoXY(2,6);
   printf("Delete          [4]");
    gotoXY(2,7);
   printf("Display         [5]");
    gotoXY(2,8);
   printf("Attend          [6]");
    gotoXY(2,9);
   printf("Exit Software   [7]");
    gotoXY(2,11);
   printf("Choose number:     ");

    scanf("%d",&choose);

    switch(choose)
    {
    case 1:
        Add_ID();
        break;
    case 2:
        Search_ID();
        break;
    case 3:
        Modify_ID();
        break;
    case 4:
        Delete_ID();
        break;
    case 5:
        Ascend_ID_Display();
        break;
    case 6:
        Attendence();
        break;
    case 7:
        return EXIT_SUCCESS;
        break;
    default:
        Menu();

    }
    return 0;
}

void Add_ID()
{    system("cls");

    printf("\n\n****Add ID*****\n\n");

    FILE *fp;
    int size;

    fp=fopen("Attendence.txt","ab+");
    if(fp==NULL)
    {
        printf("\nSystem error ");
        exit(0);
    }
    else
    {
      printf("\nHow many student's information do you want to add: ");
      scanf("%d",&size);

   for(i=0;i<size;i++)
   {
     printf("\nClass: ");
     fflush(stdin);
    gets(At[i].grade);
    printf("ID: ");
    fflush(stdin);
    gets(At[i].ID);
    printf("Full Name: ");
    fflush(stdin);
    gets(At[i].name);
    printf("Address: ");
    fflush(stdin);
    gets(At[i].address);
    printf("Parents Name: ");
    fflush(stdin);
    gets(At[i].parent);
    printf("Phone No: ");
    fflush(stdin);
    gets(At[i].phone_no);

    }

    fwrite(&At[0],sizeof(Attendence_record),i,fp);
    printf("\n\nStudent record successfully added \n");

    }
    fclose(fp);
    getch();
    Menu();
   return;

}

void Search_ID()
{
    system("cls");
    FILE *fp;
    char id[10],grd[10];
    printf("\n********Search*******\n");
    int idfound=0;
     printf("\nclass: ");
     fflush(stdin);
      gets(grd);
     printf("ID: ");
        fflush(stdin);
         gets(id);

    fp=fopen("Attendence.txt","rb");
    if(fp==NULL)
    {
        printf("\nFile not found ");
        exit(0);
    }

        while(fread(&At[i],sizeof(Attendence_record),1,fp))
        {
            if(strcmp(id,At[i].ID)==0 && strcmp(grd,At[i].grade)==0)
            {
                idfound=1;
                break;
            }
          i++;

        }
        if(idfound==1)
        {
            printf("****ID found in database****\n");
            printf("\nName: %s",At[i].name);
            printf("\nID: %s",At[i].ID);
            printf("\nClass: %s",At[i].grade);
            printf("\nParents Name: %s",At[i].parent);
            printf("\nAddress: %s",At[i].address);
            printf("\nPhone_no: %s",At[i].phone_no);

        }
        else
        {
            printf("\nSorry no record found in database ");

        }

    fclose(fp);
    getch();
   Menu();
    return;

}

void Modify_ID()
{
    system("cls");
    char id[15],grd[15];
    int idfound=0;
    FILE *fp;
    printf("\n*****MODIFY ID*****\n\n");
     printf("\nclass: ");
     fflush(stdin);
      gets(grd);
    printf("\nID: ");
        fflush(stdin);
         gets(id);


    fp=fopen("Attendence.txt","rb+");

        while(fread(&At[i],sizeof(At[i]),1,fp)==1)
        {
            if(strcmp(id,At[i].ID)==0 && strcmp(grd,At[i].grade)==0)
            {
                idfound=1;
                break;
            }
          i++;
        }
        if(idfound==1)
        {
    printf("\n****ID found to modify****\n\n");
    printf("ID: ");
     fflush(stdin);
    gets(At[i].ID);

    printf("Full Name: ");
     fflush(stdin);
   gets(At[i].name);

    printf("Grade: ");
     fflush(stdin);
     gets(At[i].grade);

    printf("Parents Name: ");
    fflush(stdin);
    gets(At[i].parent);

    printf("Address: ");
    fflush(stdin);
    gets(At[i].address);

    printf("Phone No: ");
    fflush(stdin);
    gets(At[i].phone_no);


    fseek(fp,-sizeof(At[i]),SEEK_CUR);///sets back by n bytes
    fwrite(&At[i],sizeof(Attendence_record),1,fp);
    printf("\n\nStudent record successfully modified \n");

    }
    else
        {
                printf("\nSorry ID not found in database to modify ");

        }
        fclose(fp);
        getch();
        Menu();
}
void Delete_ID()
{
system("cls");
    FILE *fp,*tm;
    char id[15],grd[15];
    int flag=0;
    printf("\n*****Delete ID*****\n");
     printf("\nclass: ");
     fflush(stdin);
      gets(grd);
     printf("\nEnter ID: ");
        fflush(stdin);
         gets(id);
      fp=fopen("Attendence.txt","rb");
      tm=fopen("temp_record.txt","wb");

        while(fread(&At[i],sizeof(Attendence_record),1,fp)==1)
        {
            if(!((strcmp(id,At[i].ID) && strcmp(grd,At[i].grade)))==0 )
            {    flag=1;
               /* enter id not to be save in temp file */
                fwrite(&At[i],sizeof(Attendence_record),1,tm);
                 /*attendence=At[i] is same thing */

            }
            i++;

        }

        fclose(fp);
        fclose(tm);

        if(flag==1)
        {remove("Attendence.txt");
        rename("temp_record.txt","Attendence.txt");/*oldname,*newname
        rename change the name of a file from oldname to newname*/
         printf("\nID successfully deleted from the database");
        }
        else
        {
            printf("\nsorry file not found in  database ");
        }

        getch();
      Menu();

}

void Ascend_ID_Display()
{   system("cls");

    int j,n=0,k=1,idfound=0;

    FILE *fp;
    char grd[15];
    printf("****Display*****");
    fp=fopen("Attendence.txt","rb");
    if(fp==NULL)
    {
        printf("\n****File not found****\n");
       getch();
       Menu();
    }

      while(1)
        {  if(fread(&At[n],sizeof(Attendence_record),1,fp)==0)
            break;
             n++;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
                if(strcmp(At[i].ID,At[j].ID)<0)
                {
                 temp_rec=At[i];
                 At[i]=At[j];
                 At[j]=temp_rec;
                }
        }

    gotoXY(1,2);
    printf("ID");
    gotoXY(10,2);
    printf("Name");
    gotoXY(30,2);
    printf("Grade");
    gotoXY(50,2);
    printf("Parents Name");
    gotoXY(72,2);
    printf("address");
    gotoXY(96,2);
    printf("phone_no");
    for(i=1;i<107;i++)
    {
    gotoXY(i,3);
    printf("-");
    }

  for(i=0;i<n;i++)
   {
       gotoXY(1,4+i);
      printf("%s",At[i].ID);
        gotoXY(10,4+i);
      printf("%s",At[i].name);
       gotoXY(30,4+i);
      printf("%s",At[i].grade);
       gotoXY(50,4+i);
      printf("%s",At[i].parent);
      gotoXY(72,4+i);
      printf("%s",At[i].address);
       gotoXY(96,4+i);
      printf("%s",At[i].phone_no);

   }

   fclose(fp);
   getch();
   Menu();

}

void Attendence()
{
    system("cls");
    FILE *fp;
    int n=0,j;
   char grd[15];
   int idfound=0;
    fp=fopen("Attendence.txt","rb");
    if(fp==NULL)
    {
        printf("\n****File not found****\n");
       getch();
       Menu();
    }
      printf("\nclass: ");
     fflush(stdin);
      gets(grd);


   while(1)
        {
            if(fread(&At[i],sizeof(Attendence_record),1,fp) && strcmp(grd,At[n].grade)==0)

                idfound=1;
                 n++;
                break;
          i++;
        }
        if(idfound==1)
        {
        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
                if(strcmp(At[i].ID,At[j].ID)<0)
                {
                 temp_rec=At[i];
                 At[i]=At[j];
                 At[j]=temp_rec;
                }
        }
    gotoXY(1,2);
    printf("ID");
    gotoXY(10,2);
    printf("Name");
    for(i=0;i<n;i++)
    {
        gotoXY(1,4+i);
        printf("%s",At[i].ID);
        gotoXY(10,4+i);
        printf("%s",At[i].name);

    }
        }
    getch();
    Menu();

}

