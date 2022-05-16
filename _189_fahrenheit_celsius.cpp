#include <stdio.h>
#include <stdlib.h>

	
int main()	{
	

	int inc;
	float maior_F, menor_F, C;


	printf("A maior teperatura: ");
	scanf("%f", &maior_F);
	printf("A menor temperatura: ");
	scanf("%f", &menor_F);
	printf("Entre com o incremento: ");
	scanf("%d", &inc);
	
	printf("-----------------------------\n");
	printf("   Fahrenheit   ||    Celsius   \n");
	
	for(int F = maior_F; F >= menor_F; F-=inc){
		
		C = 5* (F - 32)/9;
		
		printf("     %.2f     ||     %.2f       \n",inc,C);
		
		
		
	}
	
}
