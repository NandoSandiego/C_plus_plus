#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num, soma5 = 0 ;
	
	printf("Digite o limite: ");
	scanf("%d", &num);
	
	for(int i = 1; i <= num; i++ ){
		
		if( i %5 == 0 ){
			
			soma5 += i;
		}
		
	}
	
	printf("A soma dos numeros multiplos de 5 ate %d  e %d ", num, soma5);
	
	
	
	return EXIT_SUCCESS;
}
