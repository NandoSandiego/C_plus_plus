#include <stdio.h>
#include <stdlib.h>



int main(){
	
	int num, quadrado;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	while(num %6 != 0){
		
		quadrado = num * num;
		
		printf("O quadrado de %d e %d \n", num, quadrado);
		
		printf("Digite um numero: ");
		scanf("%d", &num);
			
	}
	
	quadrado = num * num;
		printf("O quadrado de %d e %d \n", num, quadrado);
	
	
	
	return EXIT_SUCCESS;
}
