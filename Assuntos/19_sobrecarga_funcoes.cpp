/*
	sobrecarga -> possibilidade de ter duas ou mais 
				funções com o mesmo o mesmo nome porém 
				com argumentos de entrada diferentes
*/

#include <iostream>
using namespace std;

void soma();
void soma(int n1, int n2);


int main(){
	
	soma();
	soma(32,43);
	
	return 0;
}

void soma(){ // Sem argumentos
	int n1, n2, res;
	n1 = 10;
	n2 = 20;
	res = n1 + n2;
	
	cout << "Soma: " << res << "\n"; 
}

void soma(int n1, int n2){ // Dois argumentos
	cout << "A soma e : "<<  n1 + n2;
	
}
