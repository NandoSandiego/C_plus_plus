/*
	for(int x = 0 (variavel de inicio); x < 10 (variavel de controle); x++(iteração) ){
		
		comandos;
	}
*/

#include <iostream>
using namespace std; 

int main(){
	
	int x, y, z;
	
	for(x = 0, y = 1,z-1; x < 10 && z <= 6; x++, y+=2, z+=3 ){
		cout << "x: " << x << " -  y: " << y << "    - z: "<< z << "\n" ;
		
	}
	
	return 0;
}
