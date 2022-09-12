#include <stdio.h>
#include <stdlib.h>


int main (){
	
	float sal_minimo, salario, qtd_minimo;
	
	printf("Salario minimo: ");
	scanf("%f", &sal_minimo);
	printf("Salario da pessoa: ");
	scanf("%f", &salario);
	
	qtd_minimo = salario/sal_minimo;
	
	printf("Voce ganha %.2f salarios minimos.", qtd_minimo);
	
}
