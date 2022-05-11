#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int numero, logaritmo;
	
	for (int i = 1; i <= 8; i++){
		
		
		
		printf("Digite o %i numero: ", i);
		scanf("%d", &numero);
		system("cls");
		if(numero>0){
			logaritmo = log(numero);	
			printf("O log de %d na base 10 e %d \n", numero, logaritmo);
		}else{
			printf("Nao calculo log de numero negativo. \n");
		}
		
		
			
		
	}
	
}
