#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;


 
 
int main(){
	
	int numero;
    float base10;
	
	printf("Digite um numero: ");
	scanf("%d",numero);
	
	base10 = log10(numero);
	
	printf("O log na base 10 e: %d",base10);
	
	
	return 0;
}
