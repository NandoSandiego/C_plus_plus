#include <iostream>
using namespace std;

// variaveis declarada DENTRO de uma função  - > ESCOPO LOCAl
// variaveis declarada FORA de uma função   - > ESCOPO GLOBAL


int n3,n4; // variaveis globais

int main(){ 
		
	int n1, n2, res; // Variaveis locais
	
	//OPERADORES MATEMÁTICOS
	 /*
	 	+ -> ADIÇÃO
	 	- -> SUBTRAÇÃO
	 	/ -> DIVISÃO
	 	* -> MULTIPLICAÇÃO 
	 	% -> RESTO DE UMA DIVISÃO
	 	()-> ORDEM DE PRECEDENCIA DOS OPERADORES
	 		 
	 */
	 
	 n1 = 11, n2 = 3, n3 = 5, n4 = 2, res;  
	 
	 res = n1 + n2 + n3 + n4;
	 cout << "A soma: " << res << "\n";
	 
	 res = (n1 + n2 - (n3 *n4)/n1) % 2 ;  
	 cout << "O resultado: " << res;
	
	
	return 0;
}
