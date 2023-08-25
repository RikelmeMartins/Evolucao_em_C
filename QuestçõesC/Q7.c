#include <stdio.h>
#include <conio.h>

void main()
{

    float altura, base;

    printf("Informe o valor da altura e a base do triangulo: ");
    scanf("%f %f", &altura, &base);

    float area = (base*altura)/2;

    printf("A area do triangulo eh: %.2f", area);
    getch();

}