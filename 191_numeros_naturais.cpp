#include <stdio.h>
#include <stdlib.h>


int main(){
	
	
	int lim_sup, inc;
	
	printf("Digite o limite:");
	scanf("%d", &lim_sup);
	printf("Digite o incremento: ");
	scanf("%d", &inc);
	
	for (int i = 0; i <= lim_sup; i +=  inc ){
		
		printf("%d  ", i );
	}
	
	
	
	
	return EXIT_SUCCESS;
}
