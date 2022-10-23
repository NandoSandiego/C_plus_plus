#include <iostream>
#include "41_classes_heranca.h"

using namespace std;

int main(){
	
	Moto *m1 = new Moto();
	Carro *c1 = new Carro();
	Tanque *t1 = new Tanque();
	
	cout << m1->rodas << endl;
	m1 ->impr();
	
	c1->impr();
	t1->impr();

	return 0;	
}
