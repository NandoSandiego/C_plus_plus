/*

*/

#include <iostream>
#include <stdio.h> // Para função gets
#include <stdlib.h> // para a função  malloc -> memory alocation
using namespace std;

int main(){
	
	char *varNome; // Ele ocupa espaço perdido na memoria
	varNome = (char *) malloc(sizeof(char)); // (char *) -> tape cast //malloc tem retorno void
	//sizeof indica o tamanho do bloco
	
	cout << "Digite o nome: ";
	gets( varNome); // Espera digitar o valor e armazenar todo esse valor nessa variável
	cout << "Nome digitado: "<<varNome;
	
	
	
	return 0;
}

