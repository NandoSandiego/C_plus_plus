#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;

//#DEFINE PI 3.1415;
#define PI 3.1416

int main (){
	
	float raio, area, perimetro;
	
	
	printf("Digite o raio: ");
	scanf("%f", &raio);
	
	area =  (PI * pow(raio, 2));
	perimetro = (2 * PI * raio);
	
	
	printf("Area: %.2f \n", area);
	printf("Perimetro: %.2f \n", perimetro);
	
		return 0;
	
	
}
