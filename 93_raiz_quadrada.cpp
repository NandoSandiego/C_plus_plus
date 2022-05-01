#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	int numero;
	float raiz, quadrado;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	raiz = sqrt(numero);
	quadrado = pow(numero,2);
	
	if(numero > 0){
		printf("raiz quadrada: %.2f", raiz);
	} else if (numero < 0){
		printf("Quadrado: %.2f",quadrado);
	} else{
		printf("Voce digitou ZERO");
	}
	
	
	
	return EXIT_SUCCESS;
}

