/*
	auto -> declara uma variavel que pode ser de qualquer tipo,
			o tipo tem que ser inicializado na criação da variavel
			
	register -> quando crio uma variavel com o nome register estou
			pedindo para que o sistema armazene essa variavel em 
			um registrador e nao na memoria
			(preferencialmente eu gostaria que fosse armazenada 
			no registrador, caso o sistema puder)
			//A minha variavel precisa de um acesso rápido
			
	static -> modificador de acesso, ele armazena a variavel em uma 
			posição da memoria e todas as vezes que ele  for usar
			essa variavel ele vai usar o mesmo endreço de memoria.
*/

#include <iostream>
#include <vector>

using namespace std;


auto soma(double n1, double n2) ->double;
string frase();
void somador();


int main(){
	
	auto num = 10;// nao posso deixar para inicializar depois
						//A declaração tem que ser na inicialização
	
	auto nome = "Nando";
	auto valor = 10.5;						
	//num = 10;
	
	auto res = soma(10.4,5.5);
	//auto res = frase();
	
	cout << res << endl;
	
	//auto fra = frase();
	
	  //vector<int>v;	
	vector<int>v{1,2,3,4,5,6,7};
	//v.push_back(1);
	//v.push_back(2);
	//v.push_back(3);
	
	/*
		for(vector<int>::iterator it = v.begin(); it != v.end(); it++  ){
		cout << *it <<endl;
			} 
			
			Forma antiga
	*/
		
	for(auto it = v.begin(); it != v.end(); it++  ){
		cout << *it <<endl;
	} 

	cout << "\n\n\n";
	
	register int cont;
	for(cont = 0; cont <= 10; cont++){
		cout << cont << endl;
	}
	
	
	somador();
	somador();
	somador();
	somador();
	
	
	
	
	return 0;
}

auto soma(double n1, double n2) ->double{
	
	return n1+n2;
}

string frase(){
	return "Hello World";
	
}

void somador(){
	static auto i = 0; // agora ele faz uma soma com o static
	i++;
	cout << i << endl;
}

