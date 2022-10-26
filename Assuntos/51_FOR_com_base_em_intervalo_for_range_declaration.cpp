// Forma mais facil de utilização do looping FOR
/*
	for range declaration(for com intervalo) -> usado em coleções que podem 
				ser iteredas (vetores, vector, map, list ...)
				
				
	vector<int>n{1,2,3,4,5}				;
	
	for(auto i:n){
		
		cout << i << endl	
	}
				
*/

#include <iostream>
#include <vector>

using namespace std;


int main(){
	//Vetor
	int vt[10]{0,1,2,3,4,5,6,7,8,9};
	
	//Vector
	vector<int>vct{9,8,7,6,5,4,3,2,1,0};
	
	//elemento que nao pode ser iterado
	const char* nome = "Nando"; //const char* = string
	//string nome = "Nando";
	
	/* 
		//Forma antiga
		
		for(int i = 0; i < sizeof(vt)/4;i++ ){
			cout << vt[i] << endl;
		}
		
	*/
	
	
	for(int i:vt){ // posso escrever auto no lugar do int
		cout << i <<  " ";
	}
	
	cout << "\n\n";	
		
	for(int j:vct){ // posso escrever auto no lugar do int
		cout << j << " ";
	}
	
	/*
	// A string nao e uma coleção de elementos
	for(auto k:nome){ // Nao vai funcionar
		cout << k << endl;
	}
	
	*/
	
	cout << "\n\n";
	
	for(int k = 0; k < sizeof(nome);k++ ){
			cout << nome[k] ;
		}
}
