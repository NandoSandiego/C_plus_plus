#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int  main (){
	
	float cat_a, cat_b, hip;
	
	printf("Digite o 1 cateto: ");
	scanf("%f", &cat_a);
	printf("Digite o 2 cateto: ");
	scanf("%f",&cat_b);
	
	hip = sqrt(pow(cat_a,2) + pow(cat_b,2) );
	
	printf("A hipotenusa vale: %.2f", hip);
	
	
	
	return 0;
}
