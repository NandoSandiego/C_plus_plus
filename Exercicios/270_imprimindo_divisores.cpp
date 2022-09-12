#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int  num;
	
	do{
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		for(int i = 2; i <= num %2 == 0 ; i++){
			
			if(num % i == 0){
				printf(" %d ", i);
				
				
			}
			
			
		}
		printf("\n");
		
	}while (num != -999);
	
	
	return EXIT_SUCCESS;
}
