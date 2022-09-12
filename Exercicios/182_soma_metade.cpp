#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int numero;
	float metade = 0;
	
	for( int i = 1; i <= 10; i++){
		
		printf("Digite o %d numero: ", i);
		scanf("%d", &numero);	
		
		metade += numero/2;
		
	}
	
	printf("A soma da metade dos numeros e : %.2f", metade);
	
	
	
	
	return EXIT_SUCCESS;
}
