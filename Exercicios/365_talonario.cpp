#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(){
	
	int num_cheque[20], tot_cheque ;
	float valor[20];
	char data[128][20], destino[128][20];
	
	
	cout << "Quantos cheques :";
	cin >> tot_cheque;
	
	if(tot_cheque > 20){
		cout << "So e permitido no maximo 20 cheques... \n";
		tot_cheque = 20;
	}
	
	for(int i = 0; i < tot_cheque; i++ ){
		
		cout << "Numero do cheque: ";
		cin >> num_cheque[i];
		cout << "Valor: ";
		cin >> valor[i];
		fflush(stdin);
		cout << "Data: (dd/mm/aa) : ";
		cin.getline(data[i],128);
		//cin >> data[i];
		//fflush(stdin);
		cout << "Destino: ";
		cin.getline(destino[i],128);
		//cin >> destino[i];
		//fflush(stdin);
		
	}
	
	system("cls");
	
	for(int i = 0; i < tot_cheque; i++ ){
		
		cout << "Cheque: " << num_cheque[i] <<"\n";
		cout << "Valor: " << valor[i] << "\n";
		cout << "Data: " << data[i] << "\n";
		cout << "Destino: " << destino[i] << "\n";
		cout << "--------------------------\n";
	}
	
	
	return 0;
}
