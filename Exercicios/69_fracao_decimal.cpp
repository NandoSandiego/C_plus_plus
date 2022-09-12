#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float numerador, denominador;
	float fracao;
	
	printf("Digite o numerador: ");
	scanf("%f", &numerador);
	printf("Digite o denominador: ");
	scanf("%f", &denominador);
	
	fracao =  numerador / denominador;
	
	printf("%.0f / %.0f = %.2f",numerador,denominador, fracao);
	
	
	
	return EXIT_SUCCESS;
}
