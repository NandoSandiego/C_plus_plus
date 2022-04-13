#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;


int main (){
	
	int numero;
	float quadrado,raizq;
	
	printf("Digite um numero: ");
	scanf("%d",&numero);
	
	quadrado = numero * numero;
	raizq = sqrt(numero);
	
	printf("%.2f, %.2f",quadrado,raizq); 
	
	
	
	
	
	return 0;
}
