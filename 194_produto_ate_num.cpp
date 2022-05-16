#include <stdio.h>
#include <stdlib.h>


int main (){
	
	int num, prod = 1;
	
	printf("Digite un numero: ");
	scanf("%d", &num);
	
	for(int i = 1; i <= num; i++){
		
		printf("%d ", i);
		
		prod *= i;
		
	}
	printf("\n");
	printf("%d ", prod);
	
	
	
	return EXIT_SUCCESS;
}

