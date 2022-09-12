#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	if(numero % 3 == 0 && numero % 7 == 0 ){
		printf("%d E DIVISIVEL por 3 e por 7", numero);
	} else{
		printf("%d NAO E DIVISIVEL por 3 e por 7", numero);
	}
	
	
	return EXIT_SUCCESS;
}

