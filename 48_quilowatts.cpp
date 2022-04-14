#include <iostream>
#include <stdio.h>
//#include <stdlib.h>
//using namespace std;

int main (){
	float salario, valor, desc;
	float qtd_quilowatts, quilowatts;
	
	printf("Digite o salario atual: ");
	scanf("%f",&salario);
	printf("Quantos Quilowatts: ");
	scanf("%f",&qtd_quilowatts);
	
	quilowatts = (salario * 0.7)/100;
	valor = quilowatts * qtd_quilowatts;
	desc = valor * 0.9;
	
	printf("--------------------------- \n");
	printf("O valor de cada Kw: %.2f \n", quilowatts);
	printf("Peço a ser pago: %.2f \n", valor);
	printf("Valor com 10% de desconto: %.2f \n",desc);
	
	
	
	
	
	
	return 0;
}
