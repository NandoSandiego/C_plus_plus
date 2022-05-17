#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int numero = 0;
	
	while(numero >= 0){
		printf("Digite um numero: ");
		scanf("%d", &numero);
		
		scanf("cls");
		
		printf("Numero digitado: %d \n", numero);
		
	}
	
	
	
	return EXIT_SUCCESS;
}
