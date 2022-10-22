/*
	printf -> impressao do teclado na linguagem C
	scanf -> leitura do teclado na linguagem C
	
	d ou i -> para variaveis inteiras
	x ou X -> para variaveis inteiras exadecimais
	u -> unsigned (inteiro sem sinal)
	s -> string, char* (para textos)
	f -> float ou double
	
*/

#include <iostream>
#include <stdio.h> // Arquivo de cabeçalho que contem as especificações do printf e do scanf
#include <stdlib.h>

using namespace std;

int main(){
	
	int num1 = 123, num2, num_a = 4,num_b = 5,num_c = 6;
	char nome[10]; // ou nome[10] = "Nando";
	
	printf("Fernando Batista \nHello World \n");// quando encontra \0 significa que terminou aquela string
	printf("%d \n",num1);
	
	//Printando varias variaveis
	printf("Valor da variavel a: %d, b: %d, c: %d  \n\n", num_a,num_b,num_c);
	
	printf("Digite o valor: ");
	scanf(" %d",&num2); // & -> operador de endereço de memoria
	
	printf("Valor digitado: %d \n",num2);
	
	nome[0] = 'N';
	nome[1] = 'a';
	nome[2] = 'n';
	nome[3] = 'd';
	nome[4] = 'o';
	
	
	printf("Valor da variavel %i\n nome %s \n",num1,nome);
	 
	
	return 0;
}
