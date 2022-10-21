/*
Ponteiro -> Armazena o endereço de outra variável

		end		tipo			valor 			nome
	   1000		 int  			  4			 	num
	   1001
	   1002
	   1003
	   1004		 int			 6				num 
	   
	   int *pont;	* -> operador de ponteiro	
	   pont = &num; & -> operador de endereço
	   
	   cout << pont; //  1000 -> sai o endenreço da variável
	   cout << *pont; // 4 -> sai o valor da variável

*/

#include <iostream>


using namespace std;

int main(){
	
	string veiculo = "carro";
	
	string *pontVeic; // o ponteiro tem que ser do mesmo tipo da variavel que vou mudar
	pontVeic = &veiculo; //pontVeic recebe o endereço da variável veículo
	
	 
	cout << "nome da variavel: " <<veiculo << "\n" ;
	cout << "enereco de memoria: " << pontVeic << " = " << &veiculo << "\n";
	
	// manipulando o valor da variavel veiculo atraves do ponteiro
	*pontVeic = "Moto"; // no enderelo apontado por *pontVeic adicione moto

	cout << veiculo << "\n" << *pontVeic;
	
	
	
	return 0;
}
