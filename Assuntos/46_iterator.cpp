// iterator -> serve para navegar em uma coleção de dados
// aponta para um determinado item dentro de um item (coleção de dados)
// pernite navegar entre os itens de forma fácil

#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	//vector<string>produtos = {'mouse','teclado','monitor','gabinete','cx som',};
	vector<string>produtos;
	int tam = 4;
		
	vector<string>::iterator it;	

	for(int i = 0; i< 4; i++){
		produtos.push_back("mouse");
		produtos.push_back("teclado");
		produtos.push_back("monitor");
		produtos.push_back("gabinete");
		produtos.push_back("cx.som");
	}
	
	it = produtos.begin();
	//it = produtos.end(); // usado para p prev
	
	//advance(it,1); // Avança um numero x, dentro de uma coleção
	//next;
	//prev
	
	
	//cout << *it << endl ;
	//cout << *next(it,1) << endl; // Vai para o elemento de indice 3
	//cout << *next(it,2)<< endl;
	
	// mostrar todos os elementos
	
	for(it = produtos.begin(); it!=produtos.end(); it++){
			
			cout << *it << endl;
	}
	
	
	
/*	
	for(int i = 0; i <4;i++){
	
	cout << produtos[i] << endl;
		
	}
	
*/	
	
	return 0;
}


