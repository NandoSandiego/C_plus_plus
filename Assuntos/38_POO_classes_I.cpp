#include <iostream>

using namespace std;

// Obejetos são instancias de uma classe

class Aviao{
	
	public: 	
		int vel = 0;
		int velMax;
		string tipo;
		
		void ini(int tp); 
		
		
	private:	
			

}; 


void Aviao::ini(int tp){ //1-Jato, 2-Monomotor, 3-Planador 
	if(tp == 1){
		
		this->velMax = 800;
		this->tipo = "Jato";
		
	}else if(tp == 2){
		
		this->velMax = 350;
		this->tipo = "Monomotor";
		
	} else if(tp==3){
		
		this->velMax = 180;
		this->tipo = "Planador";
	}
}


int main(){
	
	//Instancia um novo objeto do tipo aviao
		Aviao *av1 = new Aviao(); // Criando um novo objeto do tipo aviao
		
		av1->ini(1);
		
		cout << av1->velMax << endl; //Ao invés de . (ponto), indicamos com uma seta para chamar uma propriedade
		
		Aviao *av2 = new Aviao();
		av2->ini(2) ;
		
		cout << av2->velMax << "\n";
	
	
	return 0;
}
