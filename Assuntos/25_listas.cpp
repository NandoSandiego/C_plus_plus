/*


*/

#include <iostream>
#include <list> // inclui a biblioteca de listas

using namespace std;

int main (){
				//Quantidade   	valor
				//de elementos  
	//list <int> cartas(5,50);
	//list<int> rotulos, canal, teste; // delcarando várias listas
	
	list <int> aula;
	int tam;
	
	list<int>:: iterator it;
	tam = 10;
	
	for(int i = 0; i <tam; i++){
		aula.push_front(i);
	}
	
	it = aula.begin();
	advance(it,5);
	
	aula.insert(it, 0);
	
	cout << "Tamanho da lista: " << aula.size() << "\n\n";
	
	aula.sort(); // Ordena a lista
	aula.reverse();// inverte a ordem
	
	tam = aula.size();
	
	/*for(int i = 0; i < tam; i++){
		cout <<	aula.front() << "\n"; 
		aula.pop_front(); 
	}*/
	
	
	for(int i = 0; i < tam; i++){
		cout <<	aula.front() << "\n";
		aula.pop_front(); // retira o elemento da frente
	}
	
	
	
	return 0;
}
