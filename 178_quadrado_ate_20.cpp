#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (){
	
	int multiplo;
	
	
	for (int i = 1; i <= 20; i++){
		
		multiplo = pow(i,2);
		
		printf("Quadrado de %2d e : %3d \n", i, multiplo);
		
	}
	
	
	return EXIT_SUCCESS;
}
