#include <iostream>
using namespace std;

void printar(string txt = "Ola "); // possibilita a omiss�o de argumentos


int main(){
	
	printar();
	
	
	return 0;
}



void printar(string txt){
	cout << "\n" << txt << "\n";
}
