#include <iostream>
using namespace std;

#define PI 3.14; //define uma constante
#define texto cout << "A resposta e: "


int main(){
	
	float num1,num2, res;
	
	cout << "Digite um numero: ";
	cin >> num1;
	cout << "Diigte outro numero: ";
	cin >> num2;
	
	res = (num1 + num2)/2;
	
	texto << res;
	
	
	
	return 0;
}

