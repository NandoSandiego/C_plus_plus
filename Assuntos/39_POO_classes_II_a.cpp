// Criar um arquivo .h e vincular dentro desse arquivo
#include <iostream>
#include "39_Aviao.h"

using namespace std;

int main(){
	
	Aviao *av1 = new Aviao(1);
	Aviao *av2 = new Aviao(3);
	Aviao *av3 = new Aviao(2);
	
	av1->Imprimir();
	av2->Imprimir();
	av3->Imprimir();
	
	
	
	return 0;
}
