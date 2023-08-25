#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{

    int numero;

    printf("Informe um numero interiro: ");
    scanf("%d", &numero);

    int dobro = numero*2;
    int triplo = numero*3;
    int quadrado = pow(numero, 2);
    int cubo = pow(numero, 3);
    float raiz = sqrt(numero);

    printf("Seu dobro eh: %i, seu triplo eh: %i, seu quadrado eh: %i, seu cubo eh: %i, sua raiz eh: %.1f", dobro, triplo, quadrado, cubo, raiz);
    getch();
    
}