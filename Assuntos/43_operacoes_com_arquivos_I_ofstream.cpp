#include <iostream>
#include <fstream>

using namespace std;


int main(){
	
	//ofstream -> define o arquivo como tipo de saida, a inormação sai do sistema e entrando no arquivo
	//ifstream -> A informação está saindo do arquivo e entrando para o sistema
	//fstream -> posso fazer como entrada ou saida
	
	ofstream arquivo;
	
	// Associar a um arquivo externo
	
	// faz a abertura do arquivo
	arquivo.open("43_arquivo.txt");
	
	// Armazenando coisas no arquivo
	
	
	arquivo << "Hello World\n"; 
	arquivo << ("Hello World \n", ios::app); //Para adicionar e nao substituir sem o ios::app ele sobrescreve
	arquivo << "Texto 2";
	
	// Para ler um arquivo
	arquivo << "www.nandoBatista.com.br";
	
	//temos que sempre fchar o arquivo
	arquivo.close();
	
	
	
	
	
	return 0;
}
