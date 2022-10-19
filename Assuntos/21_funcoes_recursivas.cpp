 // Uma função que chama a si mesma
 
#include <iostream>
using namespace std;

void contador(int num);
void contadorRecursiva(int num, int cont = 0);

int main(){
	
	contador(20);
	cout << "\n";
	contadorRecursiva(20,0);
	
	
	return 0;
}


//Sem recursividade
?
void contador(int num){
	for(int i = 0; i < num; i++ ){
		cout << i << " ";
	}
}

// Com recursividade

void contadorRecursiva(int num, int cont){
	cout << cont << " ";
	if(num > cont ){
		contadorRecursiva(num, ++cont);
		
	}
	
}
