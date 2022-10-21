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
	
	Automovel *carro = new Automovel[5];
	
	Automovel carro1, carro2, carro3, carro4, carro5;
	
	carro[0].insere("Tornardo", "Verde",300,450);
	carro[1].insere("Vulcao", "Vermelho",420,400);
	carro[2].insere("Terremoto", "Amarelo", 320,500);
	carro[3].insere("Raio","Azul",480,300);
	carro[4].insere("Espectro","Preto",500,500);
	
	for(int i = 0; i < 5;i++){
		carro[i].mostra();
	}
	
	
	
	
	return 0;
	
}
