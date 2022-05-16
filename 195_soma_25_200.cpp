#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int soma = 0;
	
	for(int i = 25; i <= 200; i++ ){
		
		soma += i;
		
	}
	
	printf("A soma dos numeros entre 25 e 200 e %d", soma);
	
	return EXIT_SUCCESS;
}
