#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	float pri_term, razao, n_termo;
	
	printf("Digite a razao: ");
	scanf("%f", &razao);
	printf("Digite o 1o termo: ");
	scanf("%f", &pri_term);
	
	
	n_termo =  pri_term + (10 - 1)* razao;
	
	printf("O decimo termo e: %.2f", n_termo);
	
	
	
	
	
	
	
	
	
	return 0;
}
