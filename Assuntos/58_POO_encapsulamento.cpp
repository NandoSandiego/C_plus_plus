/*
	Encapsulamento -> Tecnica de proteção dos membros da nossa classe
	
*/
#include <iostream>
#include <memory>
using namespace std;


class Carro{
	
	
	
	private:
		int velMax;
		
	void setVelMax(int vm){
		this -> velMax = vm;
	}
	public:		
		int potencia;
		const char* nome;
	
	
	int getVelMax(){
		return this -> velMax;
	}
	
		
	
	
	Carro(const char* n, int p):nome(n), potencia(p){ // Lista de inicialização uniforme
		
		if(p < 100){
			this->setVelMax(120) ;
		}else if(p<200){
			this->setVelMax(170);
		}else{
			this->setVelMax(190);
		}
			
	}
	
};

int main(){
	
	unique_ptr<Carro>c1(new Carro {"Lamborgini",200}) ; //Inicialização uniforme
	cout << c1 ->nome << " - " << c1 ->potencia << " - " << c1 ->getVelMax() << endl;
	
		cout << endl;
	
	Carro c2{"MAceratti",250};
	//c2.setVelMax(750);
	cout << c2.nome << " - " << c2.potencia << " - " << c2.getVelMax() << endl;
	
	return 0;
}

