#include <iostream>
using namespace std;


int main(){
	
	int num, cont = 0;
	
	do{
		cont++;
		
		cout << "Digite um numero:";
		cin >> num;
		
		if(num % cont == 0 ){
			cout << num << "\n";
		}
		
		
	}while(num != 0);
	
	
	return 0;
}
