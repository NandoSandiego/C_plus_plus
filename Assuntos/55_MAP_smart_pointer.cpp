/*
	funciona como os normais, 
	porem deletam o objeto apontado automatiamente,assegurando
	a destruição do objeto apontado em caso de uma exceção
	garante que se o bjeto nao esta sendo usado a memoria sera liberada
	
	1 - nao precisa lembrar de liberar memoria que foi alocada para uso do objeto
	2 - nao precisa utilizar os comando delete ou free em todos os objetos que foram declarados
	3 - elimina o risco de danified pointers que são quando ponteiro aponta para objetos ja deletados
	
	int *pnum;
	int num = 10;
	
	pnum = &num; 
	
	
	// outra forma
	
	int *pnum = new int();
	*pnum = 10;
	
	// imprime o valor que ele ta apontando e o  endereco na memoria
	cout << *pnum << " - " << pnum<< endl; 
	cout << pnum << 
	
	unique_ptr ->diz que é um ponteiro unico, so permite o um ponteiro por vez
	shared_ptr ->
	
*/

class Carro{
	public:
		int vel = 0;
		int getVel(){
			return vel;
		}
		void setVel(int v){
			this->vel = v;
		}
};

#include <iostream>
#include <memory>

using namespace std;

int main(){
	
	unique_ptr<int>pnum(new int);
	//unique_ptr<int>pnum2 = pnum; //da erro
	*pnum = 10;
	
	shared_ptr<int>pnum2(new int);
	
	*pnum2 = 33;
	
	cout << *pnum << " - " << &pnum << endl;
	cout << *pnum2 << " - " << &pnum2 << endl;
	
	cout << endl;
	
	string* str = new string("Nando Batista");
	cout << *str << " - tamanho: " << str->size()<< endl;
	
	cout << endl;
	
	//Usando smart pointer
	
	unique_ptr<string>str1(new string("Hello World!"));
	cout << *str1 << " - tamanho: " << str1->size()<< endl;
	
	cout << endl;
	
	//trabalhando com classes
	
	// NA forma tradicional
	Carro *c1 = new Carro();
	cout << c1->getVel() << endl;
	
	delete c1;
	
	//Com Smart pointer
	
	unique_ptr<Carro> c2(new Carro);
	cout << c2->getVel() << endl;
	
	// usando shared_ptr
		
	shared_ptr<Carro> c3(new Carro);
	shared_ptr<Carro> c4 = c3;
	
	c3->setVel(15);
	cout << c3->getVel() << endl;
	cout << c4->getVel() << endl;
	
	
	
	
	
	
	return 0;
}
