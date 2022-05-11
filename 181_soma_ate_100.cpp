#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int soma = 0;
	
	for(int i = 1; i <= 100; i++){
		
		soma += i;
		
	}
	
	printf("Soma de 1 ate 100 : %d", soma);
	
	
	
	return EXIT_SUCCESS;
}
