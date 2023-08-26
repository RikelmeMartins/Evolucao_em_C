#include <stdio.h>

void main()
{
    
    float lado1, lado2;

    printf("informe os dois lados do quadrado: ");
    scanf("%f %f", &lado1, &lado2);

    float area = lado1*lado2;
    float perimetro = 4*lado1;

    printf("O quadrado tem a area de %f e o perimetro de %f.", area, perimetro);
    
}