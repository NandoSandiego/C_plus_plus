#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main (){
	
	int numero,c,d,u, num_inv;
	
	printf("Digite um numero de 3 digitos: ");
	scanf("%d",&numero);
	
	c = numero/100;
	d = (numero%100)/10;
	u = numero%10;
	
	//num_inv =("%d %d %d", u , d ,c);
	
	printf("O numero invertido e %d %d %d",u, d, c);
	
	return 0;
}
