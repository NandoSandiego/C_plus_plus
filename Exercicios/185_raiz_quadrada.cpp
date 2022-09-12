#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int numero;
	float raiz;
	
	for(int i = 1; i <= 15; i++){
		
		printf("Digite o %d numero: ", i);
		scanf("%d", &numero);
		
		raiz = sqrt(numero);
		
		printf("A raiz quadradada de %d  e %.2f \n", numero, raiz);
	}
	
	return EXIT_SUCCESS;
}
