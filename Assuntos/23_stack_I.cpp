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
		
*/
#include <iostream>
#include <stack> // Importar para usar a pilha

using namespace std;

int main(){
  
  //pilha   tipo  nome
  
	stack <string> cartas;
	
	cartas.push("ouros"); // para adicionar elementos a pilha
	cartas.push("copas");
	cartas.push("espadas");
	cartas.push("paus"); // est� no topo por que foi o ultimo a ser adicionado
	
	cout << "Tamanho da pilha: " << cartas.size() << "\n";
	
	cartas.pop(); // retira os elementos de uma pilha
	cout << "Tamanho da pilha: " << cartas.size() << "\n";
	
	cout << "Carta do topo: " << cartas.top() << "\n"; // retorna o elemento que est� no topo
	
	
	
	return 0;
}

