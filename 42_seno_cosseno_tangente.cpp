#include <iostream>
#include <math.h>
using namespace std;



int main (){
	
	float angulo, seno, cosseno, tangente;
	
	cout << "Digite o angulo (em graus) : ";
	
	cin >> angulo;
	
	seno = sin(angulo);
	cosseno = cos (angulo);
	tangente = tan (angulo);
	
	printf("Seno: %.2f \n",seno);
	printf("Cosseno: %.2f \n", cosseno);
	printf("Tangente: %.2f \n", tangente);
	
	
	/*
	cout << "Seno: " << seno << " \n";
	cout << "Cosseno: " << cosseno << " \n";
	cout << "Tangente: " << tangente <<" \n";
	*/
	
	
	return 0;
	
}
