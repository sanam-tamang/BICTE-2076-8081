
#include<stdio.h>
#include<time.h>
int main()
{
    time_t a;
    a=time(NULL); /* if this is not time will not be right */
    printf("Date: %s",ctime(&a));/* ctime is current time of the system */
    return 0;
}
