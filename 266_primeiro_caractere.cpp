#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char nomes [50], pri_carac[1];
	
	
	printf("Digite o nome: ");
	gets(nomes);
	
	fflush(stdin);
	
	char *strncpy(char  *pri_carac,char *nomes, 1);
	
	printf("%s", pri_carac);
	
	while( nomes != "FIM"  ){
		
		printf("Digite o nome:");
	}
	
	
	
	return EXIT_SUCCESS;
}
