#include <stdio.h>
float cel_to_fahr(float);
/* test power function */
int main()
{
    float celsius;
    printf("Enter the temperature in Celsius\n");
    scanf("%f",&celsius);
    printf("The value of the temperature in Fahrenheit is %f\n",cel_to_fahr(celsius));
}
float cel_to_fahr(float a )
{
    float b;
    b=(9.0/5.0*a)+32;
    return b;
}