#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	if(numero %5 == 0){
		printf("E DIVISIVEL por 5");
	} else{
		printf("NAO E DIVISIVEL por 5");
	}
	
	
	
	
	return EXIT_SUCCESS;
}
