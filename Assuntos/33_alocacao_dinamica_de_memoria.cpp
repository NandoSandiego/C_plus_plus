/*

*/

#include <iostream>
#include <stdio.h> // Para fun��o gets
#include <stdlib.h> // para a fun��o  malloc -> memory alocation
using namespace std;

int main(){
	
	char *varNome; // Ele ocupa espa�o perdido na memoria
	varNome = (char *) malloc(sizeof(char)); // (char *) -> tape cast //malloc tem retorno void
	//sizeof indica o tamanho do bloco
	
	cout << "Digite o nome: ";
	gets( varNome); // Espera digitar o valor e armazenar todo esse valor nessa vari�vel
	cout << "Nome digitado: "<<varNome;
	
	
	
	return 0;
}

