#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nome[50][20];
	float salario[20],novo_salario[20];
	
	for(int i = 0; i< 2; i++){
		
		printf("Digite o nome do funcionario: ");
		scanf("%s", nome[i]);
		fflush(stdin);
		printf("Salario de %s: ", nome[i]);
		scanf("%f", &salario[i]);
		
	}
	system("cls");
	
	for(int i = 0; i < 2; i++){
		novo_salario[i] = salario[i] + salario[i] * 0.08;
		
		printf("--------------------------\n");
		printf("Funcionario: %s \n", nome[i]);
		printf("Novo salario %.2f \n", novo_salario[i]);
		
	}
	
	
	return EXIT_SUCCESS;
}
