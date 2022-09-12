#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int num[8];
	
	for(int i = 0; i < 8; i++){
		
		printf("Digite o %d numero: ", i+1);
		scanf("%d", &num[i]);
		
		
	}
	
	system("cls");
	
	for(int i = 0; i < 8; i++ ){
		printf("num[%d] = %d \n", i, num[i]);
	}
	
	printf("Sao multiplos de 6: \n");
	
	for(int i = 0; i < 8; i++ ){
		
		if(num[i] %6 == 0){
			printf(" vet[%d] = %d \n", i, num[i] );
		}
		
	}
	
	
	return EXIT_SUCCESS;
}
