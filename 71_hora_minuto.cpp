#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int hora, minuto, tot_min;
	
	printf("Digite a hora: ");
	scanf("%d", &hora);
	printf("Digite o minuto: ");
	scanf("%d", &minuto);
	
	printf("A hora que voce digitou foi %d:%d \n", hora, minuto);
	
	tot_min = hora * 60 + minuto;
	
	printf("Se passaram %d minutos da hora que voce digitou");
	
	
	
	
	
	return EXIT_SUCCESS;
}
