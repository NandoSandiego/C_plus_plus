#include <iostream>
using namespace std;


 int soma_2(int n1, int n2){
 	
 		
 	return n1 + n2;
 	
 }


int main (){
	
	int n1, n2, res;
	
	cout <<"Digite um numero: ";
	cin >> n1;
	cout << "Digite outro numero: ";
	cin >> n2;
	
	res = soma_2(n1, n2);
	
	cout << "O resultado e " << res;
	
	
	return 0;
}
