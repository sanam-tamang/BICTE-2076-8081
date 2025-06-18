
#include <stdio.h>
#include <conio.h>

int main(){
 
    int sday;
    printf("\nEnter day from 1 to 7 ");
    scanf("%d",&sday);

    switch(sday)
    {
        case 1:
        printf("Sunday");
        break;
        case 2:
        printf("Monday");
        break;
        case 3:
        printf("Tuesday ");
        break;
        case 5:
        printf("Thurday ");
        break;
        case 4:
        printf("Wednesday");
        break;
        case 6:
        printf("Friday ");
        break;
        case 7:
        printf("Saturday");
        break;
        default:
        printf("\nOption does not exist ");
        break; 
    }
    return 0;
}