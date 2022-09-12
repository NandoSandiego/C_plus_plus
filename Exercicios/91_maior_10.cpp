#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num_a, num_b, soma;
	
	printf("Digite um numero: ");
	scanf("%d", &num_a);
	printf("Digite outro numero: ");
	scanf("%d", &num_b);
	
	soma = num_a + num_b;
	
	if(soma > 10){
		printf("A soma dos numeros e %d", soma );
	}
	
	
	
	return EXIT_SUCCESS	;
}
