#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Biblioteca necessária para strings
using namespace std;

int main(){
	
	//string nome;
	char nome[100], pri_letra[1];
	int tot_letras;
	
	
	printf("Digite o seu nome: ");
	scanf("%s",nome);
	
	tot_letras = strlen(nome); // tamanho dos caracteres digitados
	strncpy(nome,pri_letra, tot_letras - (tot_letras));
	
		
	printf("-----------------------------\n");
	printf("O nome digitado foi: %s \n",nome);
	printf("Total digitado de letras foi: %d \n",tot_letras);
	printf("Primeira letra digitada: %s",pri_letra);
	
	
	return 0;
}
