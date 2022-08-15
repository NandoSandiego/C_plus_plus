#include <iostream>
using namespace std;


int main(){
	
	char nome[20][30], profissao[20][30];
	
	for(int i = 0; i<2; i++){
		
		cout << "Digite o nome: ";
		cin.getline(nome[i],30);
		cout << "Digite a profissao: ";
		cin.getline(profissao[i],30);
	}
	
	for(int i = 0; i < 2; i++ ){
		
		cout << "    " <<  i <<"º Coluna \n";
		cout << "Nome: " << nome[i] << "\n";
		cout << "Profissao: " << profissao[i] << "\n";
	}
	
	
	
	return 0;
}
