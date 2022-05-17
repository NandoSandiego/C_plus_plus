#include <stdio.h>
#include <stdlib.h>


int main (){
	
	int tot_num = 0;
	float numero, soma = 0, media;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	while( numero > 0 ){
		
		tot_num ++;
		soma = soma + numero;
		
		printf("Digite um numero:");
		scanf("%d", &numero);
		
				
	}
	
		media = soma / tot_num; 
	
	printf("soma de numeros: %d \n", soma);
	printf("Total de numeros: %d \n", tot_num);
	printf("A media e %d", media);
	
	return 	EXIT_SUCCESS;	
}
