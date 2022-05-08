#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){
	
	char nome_a[50], nome_b[50];
	int aux;
	
	printf("Digite um nome: ");
	gets(nome_a);
	printf("Digite outro nome: ");
	gets(nome_b);
	
	aux = strcmp(nome_a,nome_b);
	
	if(aux<1){
		
		printf("Primeiro nome:%s \n ",nome_a);
		printf("Segundo nome: %s \n ", nome_b);
		
	}else{
		
		printf("Primeiro nome: %s \n ", nome_b);
		printf("Segundo nome:  %s \n ", nome_a);
	}
	
	
	
	
	
	return EXIT_SUCCESS;
}
