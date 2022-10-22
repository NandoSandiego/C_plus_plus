/*
	Manipulando ponteiros através de Arrays
*/


#include <iostream>
using namespace std;


int main(){
	
	int *pont;
	int vetor[10];
	

	pont = &vetor[0]; // = pont =  vetor; // funciona tambem com o &.(atribui o pontiro pont do primeiro elemento do meu array).
	*pont = 10; // = vetor[0] = 10;
	cout << "memoria: "<< pont<<" valor: " <<vetor[0] << "\n";	// O proximo elemento está no proximo endereço de memoria
	
	*(pont+=1); //  = pont = &vetor[1]
	*pont = 20; // = vetor[1] = 20;
	cout << "memoria: "<< pont<<" valor: " <<vetor[1] << "\n";
	
	*(pont++);
	*pont = 30; // = vetor[2] = 30;
	cout << "memoria: "<< pont<<" valor: " <<vetor[2] << "\n";
	
	
	
	
	
	
	return 0;
}
