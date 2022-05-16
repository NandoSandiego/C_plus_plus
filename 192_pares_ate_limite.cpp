#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int lim_sup;
	
	printf("Digite o limite superior: ");
	scanf("%d", &lim_sup);
	
	for(int i = 1; i <= lim_sup; i++)	{
		
		if(i %2 != 0 ){
			printf("%d  ", i);
		}
		
	}
	
	
	return EXIT_SUCCESS;
}

