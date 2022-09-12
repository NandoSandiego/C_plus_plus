#include <iostream>
using namespace std;

int main (){
	
	float num_a, num_b ;
	float dividendo, divisor, resto, quociente;
	
	cout << "Digite um numero: ";
	cin >> num_a;
	cout << "\Digite outro numero: ";
	cin >> num_b;
	
	dividendo = num_a;
	divisor = num_b;
	quociente = num_a/num_b;
	//resto = num_a % num_b;
	
	cout << "-------------------------------\n";
	cout << "Dividendo: " << dividendo << "\n";	
	cout << "Divisor: " << divisor << "\n";
	cout << "Quociente: " << quociente << "\n";
	cout << "Resto: " << resto << "\n";
	
	
	
	
	return 0;
}
