// É quando uma classe hera uma propriedade de outra

class Veiculo{
	
	public:
		int vel;
		int blind;
		int rodas;	
		void setTipo(int tp);
		void setVelMax(int vm);
		void setArma(bool ar);
		
		void impr();
	
	private:	
		int tipo; // 1-Moto, 2-Carro, 3-Caminhão,4-Tanque
		int velMax;
		bool arma;
			
};

		void Veiculo::setTipo(int tp){
			tipo = tp;
		}
		void Veiculo::setVelMax(int vm){
			velMax = vm;
		}
		void Veiculo::setArma(bool ar){
			arma = ar;
		}
void Veiculo::impr(){
	std::cout << "Tipo: " << tipo << std::endl;
	std::cout << "Velocidade Maxima: " << velMax << std::endl;
	std::cout << "Qtde rodas: "<< rodas << std::endl;
	std::cout << "Blindagem ? : " << blind << std::endl;
	std::cout << "Armamento: " << arma << std::endl;
	std::cout << ".................................\n";
	
	
}

class Moto: public Veiculo{ // automaticamente moto herda todas as propriedades de Veiculo
	
	public:
		Moto();
		
};


Moto::Moto(){
	vel = 0;
	blind = 0;
	rodas = 2;
	setTipo(1);
	setVelMax(120);
	setArma(false);
	
}

class Carro:public Veiculo{
	public:
		Carro();
};

Carro::Carro(){
	vel = 50;
	blind = 0;
	rodas = 4;
	setTipo(4);
	setVelMax(120);
	setArma(false);
}

class Tanque:public Veiculo{
	public:
		Tanque();
};

Tanque::Tanque(){
	vel = 0;
	blind = 0;
	rodas = 8;
	setTipo(3);
	setVelMax(120);
	setArma(true);
}
