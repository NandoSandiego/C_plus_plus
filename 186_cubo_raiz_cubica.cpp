#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (){
	
	float numero, cubo,rz_cubica;
	
	for(int i = 1; i <= 4; i++ ){
		
		printf("Digite um numero: ");
		scanf("%f", &numero);
		
		cubo = pow(numero,3);
		rz_cubica = cbrt(numero);
		
		
		printf("O cubo: %.2f \n", cubo);
		printf("A raiz cubica: %.2f \n", rz_cubica);
		printf("-----------------------------\n");
	}	
	
	
	
	return 	EXIT_SUCCESS;
}
