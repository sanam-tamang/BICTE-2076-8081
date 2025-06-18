
void OpeningFilesList()
{
    DIR *d;
    step=2,lstep=2;


    struct dirent *dir;
   d=opendir(".");
   if(d)
   {
       while((dir=readdir(d))!=NULL)
       {
            if(step>=2 && step<=40)
          {

            gotoxy(x-(x-7),step);
           printf("%s",dir->d_name);
           step++;
           }
           else if(step>=41 && step<=72)
           {
             gotoxy(x-(x-7)+40,lstep);
           printf("%s",dir->d_name);
           lstep++;

           }

       }

   }
    closedir(d);
}
