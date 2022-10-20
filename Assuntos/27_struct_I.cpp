/*
	Struct -> um tipo que podemos criar,
	uma coleção de variáveis e métodos

*/


#include <iostream>

using namespace std;

struct Automovel{ // variável sao propriedades
	
	string nome;
	string cor;
	int pot;
	int velMax;
	
	
};

int main(){
	
	Automovel carro1;
	carro1.nome = "Tornado";
	carro1.cor = "vermelho";
	carro1.pot = 450;
	carro1.velMax = 350;
	
	cout << "Nome: " << carro1.nome << "\n";
	cout << "Cor: "<< carro1.cor << "\n";
	cout << "potencia: "<< carro1.pot  << "\n";
	cout << "Velocidade maxima: "<< carro1.velMax << "\n";
	cout << "\n------------------------------\n";
	
	Automovel carro2;
	
	carro2.nome = "Relampago";
	carro2.cor = "Azul";
	carro2.pot = 390;
	carro2.velMax = 420;
	
	cout << "Nome: " << carro2.nome << "\n";
	cout << "Cor: "<< carro2.cor << "\n";
	cout << "potencia: "<< carro2.pot  << "\n";
	cout << "Velocidade maxima: "<< carro2.velMax << "\n";
	
	
	
	return 0;
}
