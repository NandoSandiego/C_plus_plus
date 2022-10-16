#include <iostream>
using namespace std;

int main(){
	
	int n1, n2;
	n1 = 15;
	n2 = 10;
	
	//INCREMENTO ou DECREMENTO
	
	cout <<"Antes:  "<< n1 << "\n";
	
	// Forma padrão: n1 = n1 + 1; ou n1 = n1 - 1; ou 
	
	//forma contraida
	//n1+=1; ou n1-=1; ou n1*=1; n1/=1; 
	
	//outra forma
	n1++; // ou n1--
	cout <<"Depois: "<< n1 << "\n";
	
	//POS-FIXADO E PRE-FIXADO
	// n2++           ++n2
	
	cout <<"POS: " << n2++ << "\n";
	cout <<"PRE: " << ++n2 << "\n"; // Ele incrementa e depois usa o valor da variável
	
	
	
	return 0;
}
