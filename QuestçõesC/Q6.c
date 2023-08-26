#include <stdio.h>

void main()
{

    int numero;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    int ant = numero - 1;
    int suc = numero + 1;

    printf("Seu antecessor eh: %d e seu sucessor eh: %d", ant, suc);
    
}