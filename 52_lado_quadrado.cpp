#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;


int main (){

	
	float lado, perimetro, area, diagonal;
	
	printf("Digite o lado: ");
	scanf("%f ", &lado);
	
	perimetro = (float) 4 * lado;
	area = pow(lado,2);
	diagonal = lado * sqrt(2);
	
	printf("-------------------- \n");
	printf("Perimetro: %.2f \n", perimetro);
	printf("Area: %.2f \n", area);
	printf("Diagonal: %.2f \n", diagonal);
	
	
	
	
	
	
	return 0;
}
