#include <stdio.h>

int main() 
{
	
	float nota1, nota2, nota3;
	
	printf("Informe a primeira, segunda e terceira nota: ");
	scanf("%f %f %f", &nota1, &nota2, &nota3);
	
	float media = (nota1+nota2+nota3)/3;
	
	printf("A media eh: %.2f", media);
	
}