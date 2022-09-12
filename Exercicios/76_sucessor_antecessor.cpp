#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int numero, antecessor, sucessor;
	
	printf("Digite um numero [de 0 a 60]: ");
	scanf("%d", &numero);
	
	antecessor = numero - 1;
	sucessor = (numero + 1) % 61;
	
	printf("Antecessor: %d \n", antecessor);
	printf("Sucessor: %d \n", sucessor);
	
	
	return 	EXIT_SUCCESS;	
}
