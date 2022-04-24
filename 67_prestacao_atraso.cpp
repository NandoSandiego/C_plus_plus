#include <stdio.h>
#include <stdlib.h>


int main (){
	
	float valor, taxa, tempo, prestacao;
	
	printf("O valor da prestacao: ");
	scanf("%f", &valor);
	printf("O valor da taxa: ");
	scanf("%f", &taxa);
	printf("Quanto tempo : ");
	scanf("%f", &tempo);
	
	prestacao = valor + (valor * taxa * tempo)/100;
	
	printf("----------------------------- \n");
	printf("O valor da prestacao e: %.2f R$ \n", prestacao);
	
	
	
	
	
	
	return EXIT_SUCCESS;
}
