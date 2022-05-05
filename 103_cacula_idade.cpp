#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int ano_nasc, ano_atual, idade;
	
	printf("Digite o ano atual: ");
	scanf("%d", &ano_nasc);
	printf("Ano atual: ");
	scanf("%d", &ano_atual);
	
	idade = ano_atual - ano_nasc;
	
	printf("-------------------------------- \n");
	if(idade < 0){
		printf("ERRO no ano de nascimento");
	}else{
		printf("voce tem %d anos", idade);
	}
	
	
	
	
	
	
	return EXIT_SUCCESS;
}
