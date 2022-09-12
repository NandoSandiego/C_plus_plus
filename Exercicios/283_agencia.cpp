#include <iostream>
#include <cstring>
using namespace std;


int main (){
	
	int num_conta, qtd_conta = 0, tot_clientes = 0, tot_neg = 0;
	char nome[50];
	float saldo, saldo_tot = 0;
	
	do{
		
		cout << "Digite o numero da conta: ";
		cin >> num_conta;
		cout << "Nome do Cliente: ";
		cin >> nome;
		cout << "Saldo do Cliente: ";
		cin >> saldo;
		
		cout << "----" << num_conta <<"---- \n";
		cout << "Cliente: " << nome << " \n";
		cout << "Saldo: " << saldo << "\n";
		
		if( saldo < 0){
			
			cout << "Saldo NEGATIVO \n";
			tot_neg ++;
			
		}else{
			
			cout << "Saldo POSITIVO \n";
		}
		
		system("cls");
		
		qtd_conta ++;
		tot_clientes ++;
		saldo_tot += saldo;
		
		
	}while(num_conta != -999 || num_conta >= 10000 );
	
		
		
		cout << "======================== \n";
		cout << "Total negativados: " << tot_neg << " \n";
		cout << "Total de Clintes: " << tot_clientes << " \n";
		cout << "Saldo do Banco: " << saldo_tot << " \n";
		cout << "-------------------------\n";
		
		
		
		
	
	
	
	return 0;
}

