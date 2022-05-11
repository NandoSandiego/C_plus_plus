#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int num_a, num_b, num_c, maior;
	
	printf("Numero A:");
	scanf("%d", &num_a);
	printf("Numero B:");
	scanf("%d", &num_b);
	printf("Numero C:");
	scanf("%d", &num_c);
	
	maior = num_a;
	
	if(num_b > maior){
		maior = num_b;	
	} 
	
	if(num_c > maior){
		maior = num_c;
	}
	
	printf("-----------------\n");
	printf("O maior numero e: %d", maior);
	
	
	return EXIT_SUCCESS;
}
