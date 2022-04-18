#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main (){
	
	float base, altura,perimetro, area, diagonal;
		
	printf("Digite a base: ");
	scanf("%f", &base);
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	
	perimetro = 2 * base + 2 * altura;
	area = (base * altura)/2 ;
	diagonal = sqrt( pow(base,2) + pow(altura,2) );	
	
	printf("-------------------- \n")	;
	printf("Area: %.2f \n", area);
	printf("Perimetro: %.2f \n", perimetro);
	printf("Diagonal: %.2f \n", diagonal);
	
	
	
	
	
		return 0;
	
}
