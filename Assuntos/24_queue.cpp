/*
	O  primeiro elemento que entra é o primeiro elemento que sai
	
		__________________
		
	--->   	1	2 	3     --->
		__________________	
	
	empty
	size
	front -> retona a carta que está na frente da fila (nao remove)
	back -> retona a carta que está no final da fila (nao remove)
	push
	pop -> remove sempre a carta que está na frente da fila

*/



#include <iostream>
#include <queue> // Importa a fila
using namespace std;

int main(){
	
	queue <string> cartas;
	
	cartas.push("ouros"); 
	cartas.push("copas");
	cartas.push("espadas");
	cartas.push("paus");
	
	cout << "Tamanho da fila: " << cartas.size() << "\n";
	cout << "Primeira carta: " << cartas.front() << "\n";
	cout << "Ultima carta..." << cartas.back() << "\n";
	
	cout << "Tamanho da fila: " << cartas.size() << "\n";
	
	while(!cartas.empty()){
		cout << "Primeira carta: " << cartas.front() << "\n";
		cartas.pop();
	}
	
	
	return 0;
}
