#include <stdio.h>
#include <stdlib.h>


int main (){
	
	int valor_a, valor_b, aux;
	
	printf("Digite o valor A: ");
	scanf("%d", &valor_a);
	printf("Digite o valor B: ");
	scanf("%d", &valor_b);
	
	aux = valor_a;
	valor_a = valor_b;
	valor_b = aux;
	
	printf("------------------------\n");
	printf("Novo valor de A: %d \n", valor_a);
	printf("Novo valor de B: %d \n", valor_b);
	
	
	return EXIT_SUCCESS;
}
