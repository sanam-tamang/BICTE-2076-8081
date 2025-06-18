

#include<stdio.h>
#include<conio.h>
 enum week{sun,mon,tue,wed,thu,fri,sat};

 int main()
 {
     enum week today;

     today=sat;

     printf("\n %s day ",today+1); /* today+1 that's why enum value is always start with 0 by default */
     return 0;

 }
