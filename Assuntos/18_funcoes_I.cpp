#include <iostream>
using namespace std;

//Prototipando funções (apresenta essa função ao programa)

void texto();
void soma(int a, int b);
int soma2(int c, int d);
void tr(string tran[4]);


int main(){ // main é a função principal
	
	int res;
	string transp[4] = {"carro", "aviao", "barco", "trem"};
	
	for(int i = 0; i < 2; i++){
		texto();
	}
	
	soma(5,6);
	soma(6, 33);
	
	res = soma2(23,45);
	cout << "O valor de res: " << res << "\n"; // ou
	cout << "O valor de soma2: " << soma2(43,43) << "\n";
	
	tr(transp);
	
	return 0;
}


//Declaração de funções

void texto(){ // retorno 'void' nao retorna nenhum valor
	cout << "ola mundo! \n\n";
}

void soma(int a, int b){
	cout << "Soma de A e B: " << a + b << "\n";
}

int soma2(int c, int d){  // retorna um valor inteiro
	
	return  c + d; // qualquer valor de saida diferente de 'void' usaremos o return
	
}

void tr(string tran[4]){
	for(int i = 0; i < 4; i++){
		cout << tran[i] << "\n";
	}
}
