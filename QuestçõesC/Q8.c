#include <stdio.h>
#include <conio.h>

void main()
{
    float celsius;

    printf("Informe a temperatura em graus celsius: ");
    scanf("%f", &celsius);

    float fah = celsius * 1.6 + 32;
    float kelvin = celsius + 273;

    printf("A temperatura em Fahrenheit eh: %.1f e em kelvin eh: %.1f", fah, kelvin);
    getch();
    
}