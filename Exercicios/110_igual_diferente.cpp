#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num_a, num_b;
	
	printf("Digite um numero: ");
	scanf("%d", &num_a);
	printf("Digite outro numero: ");
	scanf("%d", &num_b);
	
	if(num_a == num_b){
		printf("OS numeros sao iguais");
	}else{
		printf("Os numeros sao diferentes");
	}
	
	
	
	
	return EXIT_SUCCESS;
}
