#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main(){
	
	int numero, base;
	double logaritmo;
	
	printf("Digite o numero: ");
	scanf("%d",numero);
	printf("Digite a base: ");
	scanf("%d", base);
	
	
	logaritmo = log(numero)/log(base);
	
	cout << logaritmo;
	printf("%f",logaritmo);
	
	
	
	
	return 0;
}
