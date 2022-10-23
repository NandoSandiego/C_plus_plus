

class Veiculo{
	
	public:
		int vel;
		int tipo;
		Veiculo(int tp); // E chamado automaticamente quando instancio a classe		
		int getVelMax();
		bool getLigado();
		void setLigado(int l);
	
	
	
	private: // as propriedades e metodos privados só podem ser manipulados pela classe 		
		std::string nome;
		int velMax;
		bool ligado;
		void setVelMax(int vm);
};

int Veiculo::getVelMax(){
	return velMax;
}

void Veiculo::setVelMax(int vm){
	velMax = vm;
}

bool Veiculo::getLigado(){
	return ligado;
}

void Veiculo::setLigado(int l){
	
	if(l == 1){
		ligado = true;
	}else if(l == 0){
		ligado = false;
	}
}



Veiculo::Veiculo(int tp){ //1 - Carro, 2 - Avião, 3 - Navio
	
	tipo = tp;
	
	if(tipo == 1){
		
		nome = "Carro";
		setVelMax(200);
		
	} else if(tipo == 2){
		
		nome = "Aviao";
		setVelMax(800);
		
	}else if(tipo == 3){
		
		nome = "Navio";
		setVelMax(120);
	}	
	
	setLigado(0); // ligado = false;
	
}


