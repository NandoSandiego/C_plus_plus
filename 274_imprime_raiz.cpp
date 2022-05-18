#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int num,cont = 1, raiz;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	cont++;
	
	while(cont <= 10 ){
		
		cont++;	
		
		if(num < 0){
			printf("Numero negativo \n");
		}
		
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		
	}
	
	
	return EXIT_SUCCESS;
}
