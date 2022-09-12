#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int numero, centena;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	centena = numero * 0.01;
	
	if(centena % 2 == 0){
		printf("%d e PAR", centena);
	}else{
		printf("%d e IMPAR", centena);
	}
	
	
	
	return 	EXIT_SUCCESS;
}




