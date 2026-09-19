#include<stdio.h>
int main()
{
    float celcius,fahrenheit;
    scanf("%f",&celcius);

    fahrenheit=(celcius*9/5)+32;

    printf("%f F",fahrenheit);
    return 0;
}