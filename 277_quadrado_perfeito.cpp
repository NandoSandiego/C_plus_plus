#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int num, raiz;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	while(num > 0){
		
		raiz = sqrt(num);
		
		if(num == raiz * raiz){
			printf("O numero e quadrado perfeito \n");
		}else{
			printf("O numero nao e quadrado perfeito \n");
		}
		
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		
	}
	
	
	return EXIT_SUCCESS;
}
