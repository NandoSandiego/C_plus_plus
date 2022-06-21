#include <iostream>
#include <string.h>
using namespace std;

int main (){
	
	char signo[20][100];
	int data[100],dia[100], mes[100];
	
	
	
	for(int i = 0; i < 20; i++){
		
		cout << "Digite a data de nascimento(ddmm) " << i+1 <<" Pessoa: ";
		cin >> data[i];
		
		dia[i] = data[i] /100 ;
		mes[i] = data[i] %100;
		
		
		cout << "dia: " << dia[i] << "\n";
		cout << "mes: " << mes[i] << "\n";
		
		if(mes[i] = 1 && dia[i] <= 20 ){
			signo[i] == "Capricornio";
		}
		
		cout << signo[i];
	}
	
	
	
	return 0;
}
