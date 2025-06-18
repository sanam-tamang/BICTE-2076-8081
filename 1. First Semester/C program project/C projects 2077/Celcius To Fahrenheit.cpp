
#include <stdio.h>
#include <conio.h>
int main()
{
    float celsius,fahren;
    printf("Enter the temperature in celsius: ");
    scanf("%f",&celsius);
    fahren=celsius*1.8+32;
    printf("%.3f Celsius is  %.3 Fahrenheit",celsius,fahren);
    return 0;
}


