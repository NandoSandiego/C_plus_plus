#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){
	
	char nome[20][3],nome_LS[20][3];
	int idade;
	
	
	for(int i = 0; i < 3; i++){
		
		printf("Digite o nome: ");
		scanf("%s", nome[i] );
		printf("Digite a idade de %s :", nome[i]);
		scanf("%d", &idade);
		
			if(strncmp(nome[i], "L", 1 )<0  ){
			nome_LS[i] == nome[i];
		}
			
	}
	
	
	for(int i = 0; i < 3; i++){
		printf("nome[%d] = %s \n",i, nome_LS[i]);
	}
	
	
	return EXIT_SUCCESS;
}
