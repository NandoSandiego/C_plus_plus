#include <iostream>
using namespace std;

//Fun��o Soma:

void soma(int n1, int n2){
	
	cout << "A soma e: " << n1 + n2 << "\n";
}


int main (){
	
	int n1, n2;
	
	cout << "Digite um numero: ";
	cin >> n1;
	cout << "Digite outro numero: ";
	cin >> n2;
	
	soma(n1 , n2);
	
	
	return 0;
}
