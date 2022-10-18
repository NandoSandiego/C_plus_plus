/* 
ARRAY(vetores) -> Coleção de variáveis de mesmo tipo

tipo nome [tamanho];

*/

#include <iostream>
using namespace std;


int main(){
	
	int vetor[5] = {4,-8,54, -32,1};
	int i;
	
	//Outra forma de declarar...
	vetor[0] = 4;
	vetor[1] = -8;
	vetor[2] = 54;
	vetor[3] = -32;
	vetor[4] = 1;
	
	
	
	cout << vetor[7] << "\n"; //Lixo: O valor da proxima posição na memoria
	
	for(i = 0; i < 4; i++){
		cout << vetor[i] << "\n";
	}
	
	
	for(i = 0; i <sizeof(vetor)/4;i++ ){ // sizeof(vetor) retorna o tamanho de bites(cada elemnto tem 4 bites)
		cout << i+1 << " : "<< vetor[i] << "\n";
	}
	
	
	
	
	return 0;
}
