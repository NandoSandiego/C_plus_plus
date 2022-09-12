#include <iostream>
using namespace std;


int main() {
	
	int vet[10], vet_fat[10];
	
	for(int i = 0 ;i < 10; i++){
		
		cout << "Digite o " << i+1 << " valor: ";
		cin >> vet[10];
		
		vet_fat[i] = 1;
		
		for(int fat = 2; fat < vet[i]; fat++){
			vet_fat[i] *= fat;
		}
	}
	
	for(int i = 0; i < 10; i++){
		cout << vet_fat[i] << " \n";
	}
	
	return 0;
}
