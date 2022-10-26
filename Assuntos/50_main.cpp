/*
	extern -> Permite acessar uma variavel que está em um
			documento externo
*/

#include <iostream>
#include "50_variaveis.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void imprNum();
extern int valor;

int num{22};

int main() {
	
	imprNum();
	cout << valor << endl;
	cout << temp << endl;
	
	return 0;
}
