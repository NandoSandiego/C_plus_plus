// enum cria um tipo como uma string, 
//um float, em int.....neste caso criou um tipo armas
// � um conjunto de constantes inteiras que especificam valores
// que uma vari�vel desse tipo pode ter
// � uma estrutura enumerada
#include <iostream>
using namespace std;

int main(){
	
	//			0		  1        2         3
	
	enum armas {fuzil, revolver = 101, riffle, escopeta};
	// � seguencial a partir do item anterior
	
	armas armaSelec;
	
	armaSelec = fuzil;
	
	cout << armaSelec;
	
	return 0;
}
