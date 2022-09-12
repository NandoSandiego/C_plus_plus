#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	if(numero > 20){
		printf("%d e maior do que 20",numero);
	} else if(numero <20){
		printf("%d e menor do que 20", numero);
	} else{
		printf(" o numero e 20");
	}
	
	
	
	return EXIT_SUCCESS;
}
