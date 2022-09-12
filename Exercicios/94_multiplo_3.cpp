#include <stdlib.h>
#include <stdio.h>

int main (){
	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	if(numero %3 == 0 ){
		printf("%d  e multiplo de 3", numero);
	} else{
		printf("%d NAO e multiplo de 3", numero);
	}
	
	
	return EXIT_SUCCESS;
}
