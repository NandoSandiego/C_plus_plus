#include <iostream>
using namespace std;


int main (){
	
	int num, maior = 0;
	
	cout << "Digite um numero: ";
	cin >> num;
	
	while( num  != -9999 ){
		
		if(num > maior){
			maior = num;
		}
		
		cout << "Digite um numero: ";
		cin >> num;
		
		
	}
	
	cout << "O maior numero e " << maior;
	
	return 0;
}
