#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float valor_hora, num_aulas, percentual, valor_bruto, valor_liquido;
	
	printf("Digite o valor da hora aula: ");
	scanf("%f", &valor_hora);
	printf("Numero de aulas: ");
	scanf("%f", &num_aulas);
	printf("Qual o percentual: ");
	scanf("%f", &percentual);
	
	valor_bruto = valor_hora * num_aulas;
	valor_liquido = valor_bruto - valor_bruto * (percentual/100 ) ;
	
	printf("--------------------------------\n");
	printf("O valor bruto: %.2f \n", valor_bruto);
	printf("O valor liquido e: %.2f", valor_liquido);
	
	
	
	
	
	
	return EXIT_SUCCESS;
}
