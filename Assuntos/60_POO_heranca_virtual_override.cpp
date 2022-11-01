/*
	Herança -> cria uma classe que herda caracteristicas de outra classe 
	
*/

#include <iostream>
using namespace std;

class Veiculo{
	private:
		const char* nome;
		const char* cor;
	
	public:
		int	velMax;
		int rodas;
		
		void setNome(const char* no){
			nome = no;
		}	
		const char* getNome(){
			return nome;
		}
		
		void setCor(const char* cr){
			cor =cr;
		}
		const char* getCor(){
			return cor;
		}
		
		virtual void impr(){// OPA! Esse metodo vai ser sobrescrito 
			cout << "Nome:..... " << nome << endl;
			cout << "Cor:...... " << cor << endl;
			cout << "Rodas:.... " << rodas << endl;
			cout << "Vel.Max:.. " << velMax << endl << endl;
		}
};

	//Carro herda de veiculo (Carro vai possuir tudo o que tem a classe veiculo)
class Carro:public Veiculo{
	public: //se nao colocamos como publico ele define como privado
	Carro(){
		velMax = 160;
		rodas = 4;
		setNome("Markins");
		setCor("Vermelho");
	}
};

class Moto: public Veiculo{
	public:
	Moto(){
		velMax = 200;
		rodas = 2;
		setNome("Shineray");
		setCor("Azul");
	}
};

class Militar:public Veiculo{
	public:
		int municao;
		bool armamento;
		Militar(bool arma, int mo):armamento(arma),municao(mo){
		velMax = 375;
		rodas = 8;
		setNome("Bolso");
		setCor("Verde");
			if(arma){
				municao = mo;
			}else{
				municao = 0;
			}
		}
		void impr() override{// OPA! Esse metodo está sobrescrendo o metodo da classe base
			cout << "Nome:..... " << getNome() << endl;
			cout << "Cor:...... " << getCor() << endl;
			cout << "Rodas:.... " << rodas << endl;
			cout << "Vel.Max:.. " << velMax << endl;
			cout << "Armamento: " << armamento<<endl;
			cout << "Municao:.. " << municao<<endl << endl;
			
		}
};

int main(){
	
	Carro v1;
	v1.impr();
	
	Moto v2;
	v2.impr();
	
	Militar v3{false,200};
	v3.impr();
	
	Militar v4{true,100};
	v4.impr();
	
	return 0;
}
