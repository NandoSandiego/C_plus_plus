#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	
	float nota_1,nota_2, media, media_arr;
	
	printf("Digite a 1 nota: ");
	scanf("%f", &nota_1);
	printf("Digite a 2 nota: ");
	scanf("%f", &nota_2);
	
	media = (nota_1 + nota_2)/2;
	media_arr = floor(media);
	
	printf("Sua media truncada e %.2f \n",media);
	printf("Sua media arrendondada: %.2f",media_arr);
	
	
	
	
	
	return 0;
}
