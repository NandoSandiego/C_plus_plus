/*
	- teste lógico no fim
	- certifica que ao menos uma iteração e feita pelo menos uma vez
	
	do{
	
		comando;	
	
	}while(condição)
	
	
*/

#include <iostream>
using namespace std;


int main(){
	
	int cont = 20;
	
	do{
		cout << cont << "\n";
		
		cont++;
		
	}while(cont < 20);
	
	
	return 0;
}
