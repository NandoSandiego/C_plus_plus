#include <stdio.h>
#include <stdlib.h>


int main (){
	
	int num_a, num_b, num_c, maior;
	
	printf("Digite um numero: ");
	scanf("%d", &num_a);
	printf("Digite outro numero: ");
	scanf("%d", &num_b);
	printf("Digite o ultimo numero: ");
	scanf("%d", &num_c);
	
	if(num_a > num_b && num_a > num_c){
		maior = num_a;
	} else if (num_b> num_c){
		maior = num_b;
	}else{
		maior = num_c;
	}
	
	printf("O maior numero digitado e: %d",maior);
	
	
	
	
	
	return EXIT_SUCCESS;
}
