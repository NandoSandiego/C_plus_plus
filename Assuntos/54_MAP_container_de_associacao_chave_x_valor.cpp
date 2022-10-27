/*
	map<chave,valor>nome;
	Associa o segundo elemento ao primeiro
	-erase - apaga elemento
	- find - encontra elemento atraves da chave
	
*/

#include <iostream>
#include <map>

using namespace std;

int main(){
	
	map<int, string>prod;
	map<int,string>::iterator itmap;
	
	prod[0] = "Mouse";
	prod[1] = "Teclado";
	prod[2] = "Monitor";
	prod[3] = "cx.som";
	prod.insert(pair<int,string>(4,"Tablet")); // metodo de inserir precisa de um pair
	prod.insert(pair<int,string>(5,"Celular")); 
	
	prod.erase(3);// Erase -> deleta um produto de acordo com a chave
	//prod.clear();//apaga todos os elentos do map
	prod.find(2);//procura uma chave dentro do map
	//prod.erase(prod.begin(),prod.find(1));//apaga uma faixa de produtos
	//prod.erase(prod.find(1),prod.find(3)); // exclui uma faixa de elementos
	
	
	
	itmap = prod.find(1);// ele retorna achave pesquisada
	
	if(itmap == prod.end()){// nao encontrou
		
		cout << "produto nao encontrado" << endl;
		
	}else{
		
		cout << "Produto em estoque" << endl;
		cout << "chave: "<<itmap->first << endl;
		cout << "valor: "<< itmap->second << endl; 
		
	}
	cout << endl;
	
	
	for(int i = 0; i <6; i++){
		cout <<prod[i] << endl;
	}
	
	
	cout << endl;
	
	//For com iterator
	for(auto it = prod.begin(); it != prod.end(); it++){
		cout << it->first << " - ";  // Imprime a chave
		cout << it->second << endl;
	}
	
	cout << endl;
	
	// for com base em intervalo
	
	for(auto it:prod){
		cout << it.first << " - ";
		cout << it.second << endl;
	}
	
	
	
	return 0;
}
