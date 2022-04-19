#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (){
	int lado_a,lado_b,lado_c;
	float diagonal;
	
	printf("Digite o lado A: ");
	scanf("%d", &lado_a);
	printf("Digite o lado B: ");
	scanf("%d", &lado_b);
	printf("Digite o lado C: ");
	scanf("%d",&lado_c);
	
	diagonal = sqrt(pow(lado_a,2) + pow(lado_b,2) + pow(lado_c,2) );
	
	printf("Diagonal: %.2f m", diagonal);
	
	
	
	
	return 0;
}
