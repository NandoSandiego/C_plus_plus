#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int num_a, num_b, soma;
	
	printf("Digite um numero: ");
	scanf("%d", &num_a);
	printf("Digite outro numero: ");
	scanf("%d", &num_b);
	
	soma = num_a + num_b;
	
	if(soma > 20){
		soma += 8;
		printf("%d", soma);
		
	} else{
		soma += 5;
		printf("%d", soma);
	}
	
	
	
	return EXIT_SUCCESS;	
}

