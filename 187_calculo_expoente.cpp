#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int base, exp, pot = 1;
	
	printf("Digite o valor da base: ");
	scanf("%d", &base);
	printf("Digite o valor do expoente: ");
	scanf("%d",&exp);
	
	if( base > 1 && exp >= 2 ){
		
		for(int i = 1; i <= exp; i++){
			pot *= base;
		}
		
	}
	
	printf("A potencia vale: %d", pot);
	
	
	return EXIT_SUCCESS;
}
