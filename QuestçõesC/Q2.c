#include <stdio.h>

void main()
{

    float nota1, nota2, nota3;
    int peso1, peso2, peso3;

    printf("Informe a primeira, segunda e terceira nota: ");
	scanf("%f %f %f", &nota1, &nota2, &nota3);
    printf("Informe o peso da primeira, segunda e terceira nota: ");
	scanf("%i %i %i", &peso1, &peso2, &peso3);
    
    float divisao = peso1+peso2+peso3;
    float media = ((nota1*peso1)+(nota2*peso2)+(nota3*peso3))/divisao;

    printf("A media eh: %.2f", media); 
    
}