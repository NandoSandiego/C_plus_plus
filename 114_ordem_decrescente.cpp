#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num_a, num_b;
	
	
	printf("Digite um numero: ");
	scanf("%d", &num_a);
	printf("Digite outro numero: ");
	scanf("%d", &num_b);
	
	if(num_a > num_b){
		printf("%d \n", num_b);
		printf("%d \n", num_a);
	}else{
		printf("%d \n", num_a);
		printf("%d \n", num_b);
	}
	
	
	
	return EXIT_SUCCESS;
}
