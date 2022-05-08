#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	
	char nome[50], jose[4], *pri_nome  ; 
		
	printf("Digite um nome: ");
	gets(nome);
	
	pri_nome = strncat(jose, nome, 4);
	//printf(pri_nome);
	
	if( (strcmp(pri_nome, "JOSE" ) == 0) || (strcmp(pri_nome,"Jose" ) == 0)  || (strcmp(pri_nome,"jose") == 0) ){
		
		printf("Seu nome e Jose");
	}
	
	
	
	return EXIT_SUCCESS;
}
