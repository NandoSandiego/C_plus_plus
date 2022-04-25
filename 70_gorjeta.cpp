#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float conta,gorjeta, val_total;
	
	printf("Digite o valor a ser pago: ");
	scanf("%f", &conta);
	
	gorjeta = conta * 0.1;
	val_total = conta + gorjeta;
	
	
	
	printf("A gorjeta sera de R$  %.2f \n", gorjeta);
	printf("A conta total sera de R$  %.2f \n", val_total);
	
	
	
	return EXIT_SUCCESS;
}
