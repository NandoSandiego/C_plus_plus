#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int numero, mc;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	mc = numero * 0.01;
	
	if(mc %4 == 0 ){
		printf("%d e MULTIPLO de 4", mc);
	}
	
	
	return EXIT_SUCCESS;
}
