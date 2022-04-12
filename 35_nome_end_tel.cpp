#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;


int main (){
	
	string nome, end, tel;
		
	cout << "Digite o nome: ";
	cin >> nome;
	cout << "Digite o endereco: ";
	cin >> end;
	cout << "Digite o telefone: ";
	cin >> tel;
	
	cout << "Ola, " << nome  << " ! \n";
	cout << "Voce mora em " << end << "\n";
	cout << "O telefone e: " << tel ;
	
	
	return 0;
}
