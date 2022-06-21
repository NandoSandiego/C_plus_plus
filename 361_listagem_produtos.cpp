#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
	
	char nome[20][30];
	int codigo[30], quantidade[30], escolha, c, cod;
	float valor[30];
	
	for(int i = 0; i <30; i++){
		
		cout << "Nome: ";
		cin >> nome[i];
		fflush(stdin);
		cout << "codigo: ";
		cin >> codigo[i];
		cout << "Quantidade: ";
		cin >> quantidade[i];
		cout << "Valor: ";
		cin >> valor[i];
		system("cls");
		
	}
	
	cout << "Listar todos - [1]"  "\n"<< "Listar produto [2]  \n OPCAO: ";
	cin >> escolha;
	system("cls");
	
	if( escolha == 1 ){
		for(int i = 0; i < 30; i++){
			
			cout << "Nome: " << nome[i] << "\n";
			cout << "Codigo: " << codigo[i] << "\n";
			cout << "Quantidade" << quantidade[i] << "\n";
			cout << "Valor: " << valor[i] << "\n";
			cout << "-------------------------------- \n";
			
		}
	}
	 if (escolha == 2){
			c = 0;	
			cout << "Digite o codigo: ";
			cin >> cod;
			
			while( cod != codigo[c] && c < 30 ){
				c++;
			
				if(cod = codigo[c]){
					
					cout << "Nome: " << nome[c] << "\n";
					cout << "Codigo: " << codigo[c] << "\n";
					cout << "Quantidade" << quantidade[c] << "\n";
					cout << "Valor: " << valor[c] << "\n";
					
				}
			}
	}
	
	return 0;
}
