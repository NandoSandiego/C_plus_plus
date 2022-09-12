#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	float num_a, num_b, qdf, ddq;
	
	printf("Digite o valor A: ");
	scanf("%f", &num_a);
	printf("Digite o valor B: ");
	scanf("%f", &num_b);
	
	qdf = pow((num_a - num_b), 2 )  ;
	ddq = pow(num_a,2) - pow(num_b,2); //num_b^2;
	
	printf("Quadrado da diferenca : (A - B) =  %.2f \n ", qdf);
	printf("Diferenca dos quadrados: (A^2 - B^2) = %.2f \n",ddq);
	
	
	
	
	
	return EXIT_SUCCESS;
}
