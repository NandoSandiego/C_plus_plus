#include <stdlib.h>
#include <stdio.h>

int main (){
	
	float ld_maior, ld_menor, area;
	
	printf("Digite o lado maior: ");
	scanf("%f", &ld_maior);
	printf("Digite o lado menor: ");
	scanf("%f", &ld_menor);
	
	area = (ld_maior + ld_menor)/2 ;
	
	printf("A area do losango e: %.2f", area);
	
	
	
	
	return 0;
}
