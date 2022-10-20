/*
 � como se fosse um vetor, so que controles espec�ficos
 O primeiro elemento a ser inserido ser� a ser removido
			
			s� tem uma porta de entrada
	____     ____
		(	)
		(	)		stack
		(	)		pilha
		( 3	)
		( 2	)	
		(_1_)
		
		O primeiro elemento a sair ser� o 3.
		O ultimo elemento a ser retirado 1.
		
		push -> para adicionar elementos a pilha
		empty -> retorna true or false, verifica se a pilha est� vazia
		pop -> retira os elementos do topo de uma pilha
		size -> verifica o tamanho da pilha
		top -> retorna o elemento que est� no topo
		
*/
#include <iostream>
#include <stack> // Importar para usar a pilha

using namespace std;

int main(){
  
  //pilha   tipo  nome
  
	stack <string> cartas;
	
	

	if(cartas.empty()){
		cout << "Pilha vazia " << "\n\n";
	}else{
		cout << "pilha com cartas " << "\n\n";
	}
	
	cartas.push("ouros"); 
	cartas.push("copas");
	cartas.push("espadas");
	cartas.push("paus"); // est� no topo por que foi o ultimo a ser adicionado
	
	cout << "Tamanho da pilha: " << cartas.size() << "\n";
	
	cartas.pop(); 
	cout << "Tamanho da pilha: " << cartas.size() << "\n";
	
	cout << "Carta do topo: " << cartas.top() << "\n"; 
	
	if(cartas.empty()){
		cout << "Pilha vazia " << "\n\n";
	}else{
		cout << "pilha com cartas " << "\n\n";
	}
	// OUtra forma de verificar se a pilha est� vazia
	
	
	
	// excluir pilha...
	
	while(!cartas.empty()){ // Enquanto cartas nao est� vazio
		cartas.pop();
	}
	
	if(cartas.size() == 0){
		cout << "Pilha esvaziada...";
	}else{
		cout << "Pilha com com cartas";
	}
	
	return 0;
}

