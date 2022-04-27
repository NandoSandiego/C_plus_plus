#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int lado_poli, diag_dif;
	
	printf("Numero de lados: ");
	scanf("%d", &lado_poli);
	
	diag_dif = lado_poli * ( lado_poli - 3 )/2;
	
	printf("O poligono tem %d diagonais diferentes", diag_dif);
	
	
	
	return EXIT_SUCCESS;
}

