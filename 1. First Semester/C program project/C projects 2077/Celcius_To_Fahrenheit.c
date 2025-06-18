
#include <stdio.h>
#include <conio.h>
int main()
{
    float celsius,fahrenheit;
    printf("Enter the temperature in celsius: ");
    scanf("%f",&celsius);
    fahrenheit=celsius*1.8+32;
    printf("%.3f Celsius is  %.3f Fahrenheit",celsius,fahrenheit);
    return 0;
}


