#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numero, entre = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	
	while(numero != 0){
		
		if( numero >= 100 && numero <= 200){
			entre++;
		}
	
	printf("Digite um numero:");
	scanf("%d", &numero);	
		
		
	}
	
	printf("Foram digitados %d numeros entre 100 e 200", entre);
	
	
	
	
	return EXIT_SUCCESS;
}
