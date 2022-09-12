#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float salario, prestacao;
	
	printf("Digite o salario ");
	scanf("%f", &salario);
	printf("Valor da prestacao: ");
	scanf("%f", &prestacao);
	
	
	if( prestacao  <= salario *0.3 ){
		printf("Emprestimo concedido!");
		
	} else{
		printf("Emprestimo negado...");
	}
	
	
	
	
	
	
	return 	EXIT_SUCCESS;
}
