/*
	POssibilidade de varias formas diferentes
	capacidade de utilizar varios metodos com o mesmo nome
	que podem realizar funções diferentes
	
	Para ocorrer polimorfismo, os métodos tem que possuir 
	parâmetros diferentes 	levando que cada um tenha uma 
	funcionalidade diferente
	
	
	func1(){			
	//Parâmetros
	}
	
	func1(int a){
	//Parâmetros
	}
	
	func1(int a, int b){
	//Parâmetros
	}
	
	*funçoes virtuais
	*SOBRECARGA DE MÉTODOS
		Cria varios metodos com o mesmo nome para uma classe		
		Com parâmetros diferentes
	
	
	
*/

#include <iostream>
using namespace std;


class Carro{
	
	private:
		int velMax;
		const char* nome;
		
	public:
		int potencia;
		
		int getVelMax(){
			return this -> velMax;
		}
		
		const char* getNome(){
			return nome;
		}
		
		
		
	//Sobrecarga de	Métodos
	Carro(){
		velMax = 120;
		potencia = 85;
		nome = "popular";
	}
	
	Carro(int pt, const char* no):potencia(pt),nome(no){
		
		if(pt < 100){
			this->velMax = 120;
		}else if(pt < 200){
			this -> velMax = 240;	
		}else{
			this ->velMax = 360;
		}
	}
};

int main(){
	
	Carro c1;
	cout << c1.getNome() << " - " << c1.potencia << " - " << c1.getVelMax() << endl;
	
	Carro c2(180,"Luxo");
	cout << c2.getNome() << " - " << c2.potencia << " - " << c2.getVelMax() << endl;
	Carro c3(300, "Esportivo");
	cout << c3.getNome() << " - " << c3.potencia << " - " << c3.getVelMax() << endl;
	
	return 0;
}




