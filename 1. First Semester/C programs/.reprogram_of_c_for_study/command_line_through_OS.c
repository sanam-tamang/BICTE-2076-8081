


#include<stdio.h>
 void main(int argc,char *argv[] )
 {
     printf("\n Program name is %s\n ",argv[0]);

     if(argc<2)
     {
         printf("\n No argument passed through cmd  ");

     }

     else{
        printf("\n First argument is %s \n",argv[1]);
     }
 }
