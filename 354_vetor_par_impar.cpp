#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int num[15];
	
	for( int i = 0; i < 15; i++){
		
		printf("Digite o %d numero: ", i+1);
		scanf("%d", &num[i]);
		
	}
	
	for(int i = 0; i < 15; i++){
		
		if(num[i] %2 == 0){
			printf("%.5d e PAR \n", num[i]);
		}else{
			printf("%.5d e IMPAR \n", num[i]);
		}
		
	}
	
	
	return 0;
}
