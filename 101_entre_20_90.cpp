#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	if ( (numero>20) && (numero<90)  ){
		printf("O numero esta entre 20 e 90");
	}else{
		printf("O numero NAO esta entre 20 e 90");
	}
	
	
	return EXIT_SUCCESS;
}
