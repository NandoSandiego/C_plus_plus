#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int numero, soma = -1;
	
	while(numero > 0){
		
		soma++;
		
		printf("Digite um numero: ");
		scanf("%d", &numero);
		
		// scanf("cls");
		
		// printf("Numero digitado: %d \n", numero);
		
		
	}
	
	printf("Qunatidade de numeros digitados: %d",  soma);
	
	
	
	return EXIT_SUCCESS;
}
