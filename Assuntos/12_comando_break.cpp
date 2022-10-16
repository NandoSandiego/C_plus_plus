// Serve para interromper qualquer tipo de loops

#include <iostream>
using namespace std;

int main(){
	
	int cont = 0;
	
	while( cont < 100){
		
		cout << cont << "\n";
		cont++;
		
		if(cont == 50){
			break; // para na condição e sai do loop
		}
	}
	
	
	return 0;
}
