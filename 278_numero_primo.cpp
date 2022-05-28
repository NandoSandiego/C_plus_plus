#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main (){
	
	int num; 
	
	cout << "Digite um numero: ";
	cin >> num; 
	
	while( num > 0 ){
		
		if(num %2 == 0 && num %3 == 0){
			cout << num << " E PRIMO";
		}
		
		cout << "Digite um numero: ";
		cin >> num;
		
		
	}
	
	
	return EXIT_SUCCESS;
}
