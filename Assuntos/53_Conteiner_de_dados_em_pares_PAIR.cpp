/*
	Container PAIR -> possibilita o ARMAZENAMENTO de dados em PARES
	
	pair<tipo, tipo> nome;
	
*/

#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main(){
	
	const int tam = 3;
	
	pair <int, string> par1(10,"Nando");
	
	cout << par1.first << " - " << par1.second << endl;
	
	// Sem incializar  com valores
	
	pair<int, string> par2;
	par2.first = 22;
	par2.second = "Bolso";
	
	cout << par2.first << " - " << par2.second << endl;
	
	// Criando em formato de vetores
	
	pair <int, int>par3[tam];
	
	par3[0].first = 3;
	par3[0].second = -4;
	
	par3[1].first = -7;
	par3[1].second = 4;
	
	par3[2].first = 5;
	par3[2].second = -5;
	
	cout << par3[0].first << " - " << par3[0].second << endl;
	
	// utilizando o make pair
	
	pair <char, int>par4[tam];
	
	par4[0] = make_pair('a',-7);
	par4[1] = make_pair('f',2);
	par4[2] = make_pair('k',0);
	
	for(int i = 0; i < tam; i++){
		cout << par4[i].first << " - " << par4[i].second << endl;
	}
	
	// Pair com 3 dados
	
	pair <int, pair<string, double>> par5[tam];
	
	par5[0] = make_pair(145, make_pair("Notebook", 1223.5));
	par5[1] = make_pair(434, make_pair("CPU", 999.98));
	par5[2] = make_pair(543, make_pair("Tablet",564.55));
	
	for(int i = 0; i < tam; i++){
		
		cout << par5[i].first << " - " << par5[i].second.first <<" - " << par5[i].second.second << endl;
		
	
	}
	
	// pair usando vector
	
	vector < pair<int, string>> prod;
	
	prod.push_back(make_pair(20,"mouse"));
	prod.push_back(make_pair(434,"teclado"));
	prod.push_back(make_pair(20,"monitor"));
	
	for(int i = 0; i < prod.size(); i++ ){
		cout << prod[i].first << " - " << prod[i].second << endl;
	}
	
	// outra foorma do for
	
	for(auto i:prod){
			cout << i.first << " - " << i.second << endl;
	}
	
	
	
	
	
	
	return 0;
}







