#include <stdio.h>
#include <stdlib.h>

int main (){
	int qtd_fitas, tot_fitas;
	float valor_aluguel, faturamento, atrasos;
	
	printf("Quantidade de fitas: ");
	scanf("%d", &qtd_fitas);
	printf("Valor do aluguel: ");
	scanf("%f", &valor_aluguel);
	
	faturamento = (qtd_fitas / 3) * valor_aluguel * 12;
	atrasos = ((qtd_fitas/3) /10) * (valor_aluguel * 0.1);
	tot_fitas = (qtd_fitas * 0.98) + qtd_fitas/10;
	
	printf("O faturamento anual e de R$ %.2f \n", faturamento);
	printf("Ganho de atrasados: %.2f \n", atrasos);
	printf("Total de fitas repostas: %.2d \n ", tot_fitas);
	
	
	return EXIT_SUCCESS;
}
