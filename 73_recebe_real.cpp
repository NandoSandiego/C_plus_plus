#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	float numero, fracao, arredondamento;
	int inteiro;
	
	printf("Digite um numero: ");
	scanf("%f", &numero);
	
	inteiro = floor(numero);
	fracao = numero - inteiro;
	arredondamento = round(numero);
	
	printf("Parte inteira: %d \n", inteiro);
	printf("Parte fracionaria %.2f \n", fracao);
	printf("A parte areedondada %.2f \n", arredondamento);
	
	
	return EXIT_SUCCESS;
}
