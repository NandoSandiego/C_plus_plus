
#include <iostream>
#include <locale.h> // biblioteca para acentua��o <locale.h> ou <locale>

using namespace std;

int main(){
//Formata��o de localidade em tudo, especifica o idioma

	setlocale(LC_ALL,"portuguese");
	cout << "� possiv�vel escrever ma�� em C++ \n";
	
	
	return 0;
}
