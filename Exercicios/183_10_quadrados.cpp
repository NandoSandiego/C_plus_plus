#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int numero, quadrado;
	
	for(int i = 1; i <= 10; i++){
		
		printf("Digite um numero: ");
		scanf("%d", &numero);
		
		quadrado = pow(numero,2);		
		
		printf("O quadrado de %d e %d \n",numero ,quadrado);
	}
	
	
	 
	
	
	
	return EXIT_SUCCESS;
}


