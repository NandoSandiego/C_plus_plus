#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	float razao, pri_termo, ene_termo, num_termo;
	
	printf("Digite a razao: ");
	scanf("%f", &razao);
	printf("O valor do primeiro termo: ");
	scanf("%f", &pri_termo);
	
	
	ene_termo =  pri_termo * pow(razao , 4) ;
	
	printf("O quinto termo e %.2f", ene_termo);
	
	
	
	
	return EXIT_SUCCESS;
}
