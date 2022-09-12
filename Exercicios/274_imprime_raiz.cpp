#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	int num, raiz;
	

	
	for (int i = 1; i <= 10; i++){
		
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		while(num <= 0 ){
			printf("Digite um numero:");
			scanf("%d", &num);
		}
		
		raiz = pow(num,2);
		
		printf("Raiz quadrada: %.2f \n", raiz);
	
				
	}
			
	
	
	
	return EXIT_SUCCESS;
}
