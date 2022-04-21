#include <stdlib.h>
#include <stdio.h>

int main (){
	
	float preco, desconto;
	
	printf("Digite o preco da mercadoria: ");
	scanf("%f", &preco);
	
	desconto = preco * 0.81;
	
	printf("O novo preco e: %.2f R$",desconto);
	
	
	
	return	EXIT_SUCCESS;
}
