#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int conj10[10], conj20[20], conjIgual[20];
	
	for(int i = 0; i < 10; i++){
		printf("Digite o %i valor: ", i+1);
		scanf("%i", &conj10[i]);
	}
	
	for(int j = 0; j < 20; j++){
		printf("Digite o %i valor: ", j+1);
		scanf("%i", &conj20[j]);
	}
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 20; i++){
			
			if(conj10[i] == conj20[j]){
				conjIgual[j] = conj10[i];	
			}
		}
	}
	
	for(int i = 0; i < 10; i++ ){
		printf("%i ", conjIgual[i]);
	}
	
	return 0;
}
