#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int num_a, num_b;
	float quadrado, raiz_q;
	
	printf("Digite um numero: ");
	scanf("%d", &num_a);
	printf("Digite outro numero: ");
	scanf("%d", &num_b);
	
		if(num_a < num_b){
			quadrado = pow(num_a,2);
			raiz_q = sqrt(num_b);
			
			printf("---------------------- \n");
			printf("Quadrado: %.2f \n",quadrado);
			printf("Raiz quadrada: %.2f \n", raiz_q);
		
		}else{
			quadrado = pow(num_b,2);
			raiz_q = sqrt(num_a);
			
			printf("---------------------- \n");
			printf("Quadrado: %.2f \n",quadrado);
			printf("Raiz quadrada: %.2f \n", raiz_q);		
			
		}
	
	
	
	return EXIT_SUCCESS;
}

