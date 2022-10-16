#include <iostream>
using namespace std;

int main(){
	
	int num = 10;
	char opc = 's';
	
	/*
		if(teste logico){
		
			teste logico = verdadeiro;
			
		}else {
		
			teste lógico falso;
			
		}
	*/
	
	/* TESTE LÓGICO
		>  - MAIOR
		<  - MENOR
		>= - MAIOR OU IGUAL
		<= - MENOR OU IGUAL
		== - IGUAL
		!= - DIFERENTE
	
	*/
	
	cout << " Digite um numero: ";
	cin >> num;
	
	if(num >= 10){
		cout << "Valor maior ou igual a 10";
	} else{
		cout << "Valor menor do que 10";
	}
	
	return 0;
}
