#include <iostream>

using namespace std;

struct Automovel{ 
	
	string nome;
	string cor;
	int pot;
	int velMax;
	int vel;
	
	
	void insere(string str_nome, string str_cor, int int_pot, int int_velmax){
			
			nome = str_nome;
			cor = str_cor;
			pot = int_pot;
			velMax = int_velmax;			
			vel = 0;
			
	}
	
	void mostra(){
		
	cout << "Nome: " << nome << "\n";
	cout << "Cor: "<< cor << "\n";
	cout << "potencia: "<< pot  << "\n";
	cout << "Velocidade: " << vel << "\n";
	cout << "Velocidade maxima: "<< velMax << "\n";
	cout << "\n------------------------------\n";
		
	}
	
	void mudaVel(int mv){
		vel = mv;
		
		if(vel > velMax){
			vel = velMax;
		}
		
		if(vel < 0){
			vel = 0;
		}
	}
	
	
	
};

int main(){
	
	Automovel carro1, carro2, carro3, carro4;
	
	carro1.insere("Tornado", "Verde", 430, 320);
	carro2.insere("Vulcão","Vermelho",320,532);
	carro3.insere("Terremoto", "Amarelo", 200,500);
	carro4.insere("Raio","Azul",400,400);
	
	carro1.mostra();
	carro2.mostra();
	carro3.mostra();
	carro4.mudaVel(340);
	carro4.mostra();
	
	
	
	
	return 0;
	
}
