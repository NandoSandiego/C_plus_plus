#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float celsius, fahrenheit;
	
	printf("Temperatura em celsius: ");
	scanf("%f", &celsius);
	
	fahrenheit = (9 * celsius + 160 )/5;
	
	printf("Teperatura em Fahrenheit: %.2f \n", fahrenheit);
	
	
	return EXIT_SUCCESS;
}
