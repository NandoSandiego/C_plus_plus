/*
	Protected ->
	Public ->
	Private ->
*/

#include <iostream>
using namespace std;


class Veiculo{
	
	private: // so pode ser acessado dentro da classe e nao permite o acesso por classe que estão herdando
		int velMax;
		int potencia;
		
	public:	//	Pode ser acessado dentro e fora da classe (todos os níveis), por menbros herdados ou quando essa classe é utilizada dentro de outra classe
		int rodas;
		const char* nome;
		
	protected: //onsigo acessar na propria classe e permite o acesso por classe que estão herdando		
		int portas;
		const char* cor;
	
	
};

class Carro:public Veiculo{
	public:
		Carro(){
			
			//velMax =180;
			//potencia = 150;
			rodas = 4;
			nome ="Carro";
			portas = 4;
			cor = "vermelho";
			
			//cout << velMax << endl;
			//cout << potencia << endl;
			cout << rodas << endl;
			cout << nome << endl;
			cout << portas << endl;
			cout << cor << endl;
		}
};

class Moto{
	public:
		Carro car;
		
		Moto(){
		//velMax = 250;
		//potencia = 500;	
		car.rodas = 2;
		car.nome ="Moto";
		//portas = 0;
		//cor = "preto";	
		
	
	
	//cout << velMax << endl;
	//cout << potencia << endl;
	cout << car.rodas << endl;
	cout << car.nome << endl;
	//cout << portas << endl;
	//cout << cor << endl;
		}
};

int main(){
	
	Carro v1;
	cout << endl;
	Moto v2;
	
	return 0;
}
