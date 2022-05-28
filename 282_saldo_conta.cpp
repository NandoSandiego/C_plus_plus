#include <iostream>
using namespace std;


int main (){
	
	int num_conta;
	float saldo;
	
	
	do{
		
		
		
		cout << "Digite a conta: ";
		cin >> num_conta;
		cout << "Digite o saldo: ";
		cin >> saldo;
		
		system("cls");
		
		cout << "Conta: " << num_conta << "\n";
		cout << "Saldo: " << saldo << "\n";
		
		if(saldo < 0){
			cout << "Saldo NEGATIVO \n";
		}else{
			cout << "Saldo POSITIVO \n";
		}
		
		
			
	}while (num_conta > 0);
	
	
	return 0;	
}
