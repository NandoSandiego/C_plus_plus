// enum cria um tipo como uma string, 
//um float, em int.....neste caso criou um tipo armas
// é um conjunto de constantes inteiras que especificam valores
// que uma variável desse tipo pode ter
// é uma estrutura enumerada
#include <iostream>
using namespace std;

int main(){
	
	//			0		  1        2         3
	
	enum armas {fuzil, revolver = 101, riffle, escopeta};
	// é seguencial a partir do item anterior
	
	armas armaSelec;
	
	armaSelec = fuzil;
	
	cout << armaSelec;
	
	return 0;
}
