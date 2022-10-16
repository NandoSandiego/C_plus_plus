/*
	(expressão) ? verdadeiro : falso
*/

#include <iostream>
using namespace std;

int main(){
	
	float num1,num2, med;
	string res;
	
	cout << "Digite a 1 nota: ";
	cin >> num1;
	
	cout << "Digite a 2 nota: ";
	cin >> num2;
	
	med = (num1 + num2)/2;
	
	med > 7 ? res = "Aprovado": res = "reprovado" ;
	
	// res = (med >=7) ? "Aprovado" : "Reprovado"; 
	
	cout <<"A media e: "<< med << "\n" <<"O aluno esta " << res;
	
	
	return 0;
}

