
#include <iostream>
#include <locale.h> // biblioteca para acentuação <locale.h> ou <locale>

using namespace std;

int main(){
//Formatação de localidade em tudo, especifica o idioma

	setlocale(LC_ALL,"portuguese");
	cout << "É possivível escrever maçã em C++ \n";
	
	
	return 0;
}
