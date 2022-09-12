#include <stdlib.h>
#include <stdio.h>

int main (){
	
	char nome[50];
	int idade;
	
	
	printf("Digite o seu nome: ");
	scanf("%s", &nome);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	
	
	printf("Ola, %s , voce tem %d anos.", nome, idade);	
	
	
	
	return 0;
}
