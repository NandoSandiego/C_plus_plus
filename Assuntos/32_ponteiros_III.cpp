//como associar o trabalho de ponteiros com funções

#include <iostream>
using namespace std;



void somar(float *var, float valor);
void pontVet(float *vet);

int main(){
	
	float num = 0;
	float vetor[5];
	
	cout << num << "\n";
	
	somar(&num, 15);
	
	cout << num << "\n\n\n";
	
	pontVet(vetor);
	
	for(int i = 0; i < 5; i++){
		cout << vetor[i] << "\n";
	}
	
	return 0; 
}

void somar(float *var, float valor){
	
		*var += valor;
	
}


void pontVet(float *vet){
	
	vet[0] = 5;
	vet[1] = 5;
	vet[2] = 5;
	vet[3] = 5;
	vet[4] = 5;
}
