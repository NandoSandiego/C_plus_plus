#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int num, lim_sup;
	
	printf("Digite a quantidade de pares:");
	scanf("%d", &num );
	
	lim_sup = num * 2;	
	
	for(int i = 2; i <= lim_sup; i+= 2){
		
		
			printf("%d  ", i);
		
		
	}
	
	
	
	return EXIT_SUCCESS;
}
