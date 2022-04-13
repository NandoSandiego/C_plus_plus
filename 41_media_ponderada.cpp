#include <iostream>
using namespace std;


int main (){
	float num_1, num_2,num_3, num_4;
	float peso_1 = 1, peso_2 = 2, peso_3 = 3, peso_4 = 4, soma_peso;
	float media;
	
	cout << "Digite o 1º numero: ";
	cin >> num_1;
	cout << "Digite o 2º numero: ";
	cin >> num_2;
	cout << "Digite o 3º numero: ";
	cin >> num_3;
	cout << "Digite o 4º numero: ";
	cin >> num_4;
	
	soma_peso = peso_1 +peso_2 + peso_3 + peso_4;
	media = (num_1*peso_1 + num_2*peso_2 + num_3*peso_3 + num_4*peso_4)/soma_peso;
	
	cout << "A media ponderada e: " << media;
	
	
	
	
	
	
	return 0;
}
