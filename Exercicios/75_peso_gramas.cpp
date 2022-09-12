#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int peso, gramas, novo_peso;
		
	printf("Quantos Quilos voce pesa: ");
	scanf("%d", &peso);
	
	gramas = peso * 1000;
	novo_peso = gramas *1.12;
	
	printf("Sua massa em gramas e: %d g \n", gramas);
	printf("Aumentando 12%, seu novo peso e %d g \n", novo_peso);
	
	return EXIT_SUCCESS;
}
