#include <iostream>
using namespace std;


int main (){
	
	int num;
	
	cout << "Digite um numero: ";
	cin >> num;
	
	int suc = num + 1;
	int ant = num - 1; 
	
	cout << "O sucessor de " << num << " e: " << suc << "\n" ;
	cout << "O antecessor de " << num << " e: " << ant << "\n" ;
	
	
	return 0;
}

