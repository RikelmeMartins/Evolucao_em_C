#include <stdio.h>
#include <math.h>

const float pi = 3.14;

void main()
{
    
    float raio;

    printf("Informe o raio da cincurferencia: ");
    scanf("%f", &raio);

    float comp = 2*pi*raio;
    float area = pi * pow(raio,2);

    printf("O comprimento eh: %.2f e a area eh: %.2f", comp, area);
    
}