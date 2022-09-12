#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int num, fat = 1;
	
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	while(num > 0){
		
		for(int i = 1; i <= num; i++){
			
			fat *= i;
		}
		
		printf("O fatorial de %d e %d \n",num, fat);
		
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		fat = 1;
	}
	
	
	
	return EXIT_SUCCESS;
}
