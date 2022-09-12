#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char profissao[30];
	int qtd = 0;
	
	printf("Digite a profissao: ");
	scanf("%s", &profissao);
	
	fflush(stdin);
	
	while( strcmp(profissao, "sair") ){
		
		
		if(strcmp(profissao, "Dentista" )){
			qtd++;	
		}
		
		printf("Digite a profissao:");
		scanf("%s", profissao);
	}
	
	printf("Existe %d dentistas.", qtd);
	
	
	return EXIT_SUCCESS;
}
