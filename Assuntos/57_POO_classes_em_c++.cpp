/*
	
	
*/

#include <iostream>
#include <memory>
using namespace std;


class Carro{
	
	public:
		int velMax;
		int potencia;
		const char* nome;
	
	Carro(const char* n, int p):nome(n), potencia(p){ // Lista de inicialização uniforme
		
		if(p < 100){
			this->velMax = 120;
		}else if(p<200){
			this->velMax = 170;
		}else{
			this->velMax = 190;
		}
			
	}
	
	/*
	
	Carro(const char* n, int p){ // Agora posso criar o metodo construtor dentro da classe
		this->nome = n;
		this->potencia = p;
		
		if(p < 100){
			this->velMax = 120;
		}else if(p<200){
			this->velMax = 170;
		}else{
			this->velMax = 190;
		}
	}
	*/
};

int main(){
	
	//Forma antiga
	Carro *c1 = new Carro("Fusca", 400);
	cout << c1->nome << " - " << c1->potencia << " - "<< c1->velMax << endl;
	
	
	delete c1;
	
	cout << endl;
	// forma moderna
	unique_ptr<Carro> c2(new Carro {"Lamborgini",200}) ; //Inicialização uniforme
	cout << c2 ->nome << " - " << c2 ->potencia << " - " << c2 ->velMax << endl;
	// nao precisa do delete
	cout << endl;
	// forma mais simples
	Carro c3{"MAceratti",250};
	cout << c3.nome << " - " << c3.potencia << " - " << c3.velMax << endl;
	
	return 0;
}

