/*
	- so faz teste de igualdades
	- constantes que s�o comparadas com a express�o
	- usado para a sele��o de op��es
*/

/* 
	switch (expressao){
		
		case conts1:
		comando1;
		break;
		
		case conts2:
		comando2;
		break;
		
		case conts3:
		comando3;
		break;
		
		case conts4:
		comando4;
		break;
		
		default:
		comando;
	}

*/


#include <iostream>
using namespace std;

int main(){
	
	int val;
	
	cout << "[1]Verde\n[2]Azul\n[3]Amarelo\n[4]Vermelho\nSelecione uma cor: ";
	cin >> val;
	
		switch(val){
			case 1:
				cout << "Cor selecionada: Verde \n";
			break;
			
			case 2:
				cout << "Cor selecionada: Azul \n";
			break;
			
			case 3:
				cout << "Cor selecionada: Amarelo \n";
			break;
			
			case 4:
				cout << "Cor selecionada: Vermelho \n";
			break;
			
			default:
				cout << "Op��o inv�lida!";
		}
	
	return 0;
}
