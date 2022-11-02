/*
	Serve para verificar se um elemento está dentro de uma coleção
	
	find(inicio, fim, elemento_pesquisado)

*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main(){
	
	int vetor[] = {5,3,1,4,7,2,6};
	int *p;
	size_t tam = sizeof vetor/4; //Armazena o tamanho de elementos
	
	p = find(vetor, vetor + tam, 6);
	
		if(p != vetor + tam){
			cout << "Numeral encontrado: " << *p << endl;
		}else{
			cout << "Numeral NAO encontrado" << endl;
		}
	
	cout << endl;
	
	// Para VECTOR
	
	vector<int> num = {1,2,3,4,5,7};
	
	auto it =  find(num.begin(),num.end(),5);
	
	if(it != num.end() ){
			cout << "Numeral encontrado: " << *it << endl;
		}else{
			cout << "Numeral NAO encontrado" << endl;
		}
	cout << endl;
	
	
	// Para LIST
	
	list<int> num1 = {'a','b','c','d','e','f'};
	
	auto it1 = find(num1.begin(), num1.end(), 'f');
	
		if(it1 != num1.end() ){
			cout << "Numeral encontrado: " << *it1 << endl;
		}else{
			cout << "Numeral NAO encontrado" << endl;
		}
	cout << endl;
	
	// Vector sem valores iniciais
	
	vector<int> num2;
	vector <int>:: iterator it2;
	int nm,qtde = 10;
	
	while(qtde > 0){
		cout << "Digite um numeral: ";
		cin >> nm;
		
	it2 = find(num2.begin(),num2.end(),nm);
	
	if(it2 != num2.end() ){
			cout << "Numeral existe no vector " <<  endl;
		}else{
			num2.push_back(nm);
			qtde--;
		}
	}
	
	cout << endl;
	
	//Find para a classe MAP
	
	map<char, int> mapa;
	mapa['a'] = 392;
	mapa['b'] = 493;
	mapa['c'] = 958;
	mapa['d'] = 348;
	mapa['e'] = 150;
	mapa['f'] = 293;
	
	auto it3 = mapa.find('c');
	
	if(it3 != mapa.end() ){
			cout << "Chave encontrada: " << it3->second <<  endl;
	
		}else{
			cout << "Chave nao encontrada" << endl;
		}
	
	
	cout << endl;
	
	 //Find para a classe string
	 
	 string texto = "Morra como heroi ou viva o suficiente para se tornar um vilao";
	 //int tam texto.size(); //pode ser usado
	 size_t encontrado = texto.find("heroi");
	 
	 if(encontrado != string::npos){
	 	cout << "Palavra encontrada " << encontrado << endl;
	 }else{
	 	cout << "Palavra NAO encontrada " << encontrado << endl;
	 }
	 
	  
	
	

	
	return 0;
}
