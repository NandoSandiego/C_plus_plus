#include <iostream>
using namespace std;


int main() {
	
	int  vet[10] , inv_vet[10], i = 0;
	
	
	
	while( vet[i] > 0 || i <= 10 ){
		
		cout << "Digite um numero: " << i << " :";
		cin >>  vet[i];
		i++;
	}
	
	
	return 0;
}
