// Com o mesmo objeto eu posso fazer tanto a entrada com a saida de dados no arquivo

#include <iostream>
#include <fstream>
#include <cstdlib> // posibilita trabalhar com "cls"

using namespace std;

int main(){
	
	fstream arquivo; // cria o aquivo e define se ela vai ser de entrada ou saida
	
	//criar o arquivo em modo de saida
	
	char opc = 's';
	string nome, linhaLida;
	
	//Saida de dados
	
	arquivo.open("45_arquivo.txt",ios::out);// especifica que sai do sistema e vai pro arquivo
		
	while((opc == 's') or (opc == 's')){   //enquando vai lendo no teclado e vai inserindo no arquivo
		
	cout << "Digite um nome: ";
	cin >> nome;
	arquivo << nome << "\n";
	
	cout << "Digitar um novo nome ?[s/n] ";
	cin >> opc;
	system("cls");
	
	}
	
	arquivo.close();
	
	//entrada de dados
	
	arquivo.open("45_arquivo.txt",ios::in|ios::app);// ios::in -> especifica que entra no arquivo e vai pro sistema | 'e' ios::app -> adiciona sem apagar os nomes (adiciona)nao paga os nomes
	
	cout << "Nomes Digitados \n";
	
	if( arquivo.is_open() ){
		
		while(getline(arquivo,linhaLida)){
			cout << linhaLida << endl; 
		}
		
		arquivo.close();
		
	}else{
		cout << "Nao foi possivel abrir o arquivo" << endl;
	}
	
	
	return 0;
}
