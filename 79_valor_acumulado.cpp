#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	int meses;
	float ap_mensal, taxa, val_acumulado;
	
	printf("Valor da aplicacao mensal: ");
	scanf("%f", &ap_mensal);
	printf("Taxa: ");
	scanf("%f", &taxa);
	printf("Numero de meses: ");
	scanf("%d", &meses);
	
	val_acumulado = ap_mensal * (pow((1 + taxa), meses) - 1  ) /taxa ;
	
	printf("O valor da taxa e %.2f", val_acumulado);
	
	
	
	
	
	
	return EXIT_SUCCESS;
}
