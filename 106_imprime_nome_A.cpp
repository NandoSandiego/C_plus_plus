#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){
	
	char nome[100] ;
	int pri_letra, val;
	
	
	printf("Digite o seu nome: ");
	gets(nome);
	
	
	val = strlen(nome);
	//pri_letra = isalpha ( (val - (val -2) ) ) ;
	pri_letra = isnum( val - (val - 2) );
	
	printf("%d",pri_letra);
	
	if (pri_letra == 97 || pri_letra == 66){
		printf("O nome comeca com A");
	} else {
		printf("Erro...");
	}
	
	//printf("%s", nome);
	//printf("%d", val);
	
	
	return EXIT_SUCCESS;
}
