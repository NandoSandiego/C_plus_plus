#include <stdio.h>
#include <stdlib.h>


int main (){
	
	int numero = 0, triplo;
	
	while(numero != -999){
		
		
		
		printf("Digite um numero: ");
	    scanf("%d", &numero);	
	    
	    triplo = 3 * numero; 	    
	    
		system("cls");
	    printf("O triplo de %d e %d \n", numero, triplo);
	    
		
	}
	
	
	
	return EXIT_SUCCESS;
}
