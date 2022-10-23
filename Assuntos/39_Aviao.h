//#ifndef 39_AVIAO_H_INCLUDED
//#define 39_AVIAO_H_INCLUDED

class Aviao{
	
	public:
		int vel = 0;
		int velMax;
		std::string	tipo;  // faz a função do using namespace std
		
		Aviao(int tp); // metodo construtor, nao precisa indicar o void
		
		void Imprimir();
		
	private:
			

};

Aviao::Aviao(int tp){ // O metodo construtor tem o mesmo nome da classe
	
	if(tp == 1){
		
		tipo = "Jato";
		velMax = 800;
		
	}else if(tp == 2){
		
		tipo = "Monomotor";
		velMax = 350;
		
	}else if( tp == 3){
		
		tipo = "Planador";
		velMax = 180;
	}

}

void Aviao::Imprimir(){
	std::cout << "-------------------------------\n";
	std::cout << "Tipo: "<< tipo << std::endl;
	std::cout << "Velocidade: " << vel << std::endl;
	std::cout << "Velocidade Max: "<< velMax << std::endl;
	
}



//#endif
