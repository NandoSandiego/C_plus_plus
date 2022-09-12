#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float deposito, taxa, rendimento, valor_total;
	
	printf("Digite o deposito: ");
	scanf("%f", &deposito);
	printf("Digite a taxa: ");
	scanf("%f", &taxa);
	
	rendimento = deposito * (taxa/100);
	valor_total = rendimento + deposito;
	
	printf("--------------------------\n");
	printf("O rendimento foi de %.2f \n", rendimento);
	printf("O valor total foi de %.2f \n", valor_total);
	
	
	
	
	
	return EXIT_SUCCESS;
}
