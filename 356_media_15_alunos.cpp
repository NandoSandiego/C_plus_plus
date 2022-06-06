#include <stdio.h>
#include <stdlib.h>


int main (){
	
	float PR1[15], PR2[15], media[15];
	char nome[50][15], sit[3][15];
	
	for(int i = 0; i < 15; i++){
		
		printf("Nome do Aluno: ");
		scanf("%s", &nome[i] );
		fflush(stdin);
		
		printf("Nota 1: " );
		scanf("%f", &PR1[i]);
		printf("Nota 2: " );
		scanf("%f", &PR2[i]);
		
		media[i] = (PR1[i] + PR2[i])/2;
		
		system("cls");
	}
	
	for(int i = 0; i <15; i++ ){
		
		
		printf("--------------------\n");
		printf("Aluno: %s \n",nome[i] );
		printf("Media: %.2f \n ", media[i]);
		
		if(media[i] >= 5){
			sit[i] == "AP";
		
		} else{
			sit[i] == "RP";
		
		}
		
		printf("Situacao: %c \n", sit[i]);
		
	}
	
	
	return EXIT_SUCCESS;
}
