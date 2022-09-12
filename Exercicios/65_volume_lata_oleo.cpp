#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI  3.1415

int main(){
	
	float raio, altura, volume;
	
	printf("Digite o raio: ");
	scanf("%f", &raio);
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	volume = PI * pow(raio,2) * altura;
	
	printf("%.2f m3", volume);
	
	
	
	
	
	return EXIT_SUCCESS;
}


