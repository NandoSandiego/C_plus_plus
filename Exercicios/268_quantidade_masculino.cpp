#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char sexo;
	int qtd_m = 0;
	
	printf("Sexo: ");
	scanf("%c", sexo);
	
	while(strcmp(sexo, "sair")){
		
		if(strcmp(sexo, "M" )){
			
			qtd_m++;
		}
	}
	
	printf("Quantidade de sexo masculino: ");
	scanf("%c", sexo);
	
	return EXIT_SUCCESS;
}
