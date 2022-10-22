#include <iostream>
#include <stdio.h> // para trabalhar com printf e scanf
#include <math.h> // biblioteca matemática
#include <iomanip>// para o setbase

using namespace std;


int main(){
	
	float pi = M_PI;
	int num = 5;
	int num2 = 15;
	
	
	
	printf("Valor de PI: %.2f \n",pi); // .2f arredonda para duas casas decimais
	
	printf("Valor de num: %07d \n", num); // Completa com 7 'zeros', funciona com float
	printf("PI: %08.3f \n", pi);
	
	cout << "Valor de num2: " <<num2 << endl;
	cout << "Valor de num2 em Exadecimal: " << hex << num2 << "\n "; // transformar um numero para exadecimal
	cout << "Valor de num2 em Octadecimal: "<< oct << num2 << "\n";// transformar um numero para octadecimal
	cout << "Valor de num2 em decimal: " << dec << num2 << "\n";
	//cout << "Valor de num2 para binario: " << setbase(2) << num2 << "\n";
	
	cout.precision(30);
	cout << "PI - duas casas decimais: " << pi << "\n";
	
	cout.precision(3);
	cout << "PI - duas casas decimais: " << pi << "\n";
	
	cout.precision(-1); // volta ao normal
	cout << "PI - duas casas decimais: " << pi << "\n";
	
	// notação de digitos científicos
	cout << "Valor PI cientifico: " << std::scientific << pi << "\n";
	// largura do elemento
	cout << "largura: " << setw <<  num << "\n";
	cout << "largura: " << setw(10) <<  num << "\n";
	cout << "largura: " << setw(10) <<  setfill('0') <<num << "\n";
	
	
	return 0;
	
}
