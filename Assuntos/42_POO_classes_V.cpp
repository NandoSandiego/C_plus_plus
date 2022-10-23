#include <iostream>
#include "42_classes_heranca_multipla.h"


using namespace std;

int main(){
	
	Base1 *obj1 = new Base1();
	Base2 *obj2 = new Base2();
	herdeiro *obj3 = new herdeiro();
	
	obj1 -> imprBase1();
	obj2 -> imprBase2();
	
	obj3 -> imprBase1();
	obj3 -> imprBase2();
	
	
	
	return 0;
}
