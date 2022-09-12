#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	if(numero % 10 == 0 ){
		printf("%d E MULTIPLO de 10 \n", numero);
	}else{
		printf("%d NAO E MULTIPLO de 10 \n", numero);
	}
		
	if (numero % 2 == 0){
		printf("%d E MULTIPLO de 2 \n", numero);
	} else{
		printf("%d NAO E MULTIPLO de 2 \n", numero);
	}

	if(numero % 5 == 0){
		printf("%d E MULTIPLO DE 5 \n", numero);	
		}else{
		printf("%d NAO E MULTIPLO DE 5 \n", numero);
		}
			
		
	
	
	/*
	
	if(numero % 2 == 0 && numero % 5 == 0 ){
		printf("%d  E DIVISIVEL por 2, 5 e 10", numero);
	} else{
		printf("%d NAO E DIVISIVEL por 2, 5 e 10", numero);
	}
	
	*/
	
	
	return EXIT_SUCCESS;
}
