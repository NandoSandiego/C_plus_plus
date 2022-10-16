#include <iostream>
using namespace std;

int main(){
	
	int num = 10;
	
	cout <<"Normal: " << num << "\n";
	
	//Metodo tradicional:
	//num = num * -1;
	num = -num; // realmente inverte
		
	cout <<"Invertido: " <<num << "\n";
	
	 // forma simplificada
	cout << "Simplificado: " << -num << "\n"; //inverte momentaneamente
	
	
	
	return 0;
}
