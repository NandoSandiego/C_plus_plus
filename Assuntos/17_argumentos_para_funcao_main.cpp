#include <iostream>
#include <string.h>
using namespace std;
/*
    int argc -> guarda a quantidade de parâmetros informados
    int argv -> é um ponteiro para uma matriz de ponteiro de caractere,
    			armazena os argumentos
*/


int main(int argc, char *argv[]){
	
	cout <<argv[0] << "\n";
	cout << argc << "\n";
		
		if(strcmp(argv[1],"sol")){ //faz uma comparação entre duas strings
					// iguais, retorna 0.
					//	diferentes, retorna 
			cout << "Vou ao cinema \n\n" ;
		}else{
			cout << "Vou ficar em casa \n\n";
		}
	
	
	return 0;
}
