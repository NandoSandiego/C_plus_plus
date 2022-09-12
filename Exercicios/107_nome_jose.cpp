#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char nome[50], jose[4], *pri_nome ;
	//int pri_nome;
	
	printf("Digite o nome:");
	gets(nome);
	
	pri_nome = strncat(jose,nome,4);
	
	
	//pri_nome = 	strcmp();
	
	
	if(strcmp(pri_nome, "jose") == 0){
		printf("O primeiro nome e JOSE");
	}else{
		printf("voce nao se chama jose...");
	}
	
	
	
	return EXIT_SUCCESS;
}
