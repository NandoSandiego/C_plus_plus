/*Alternativa mais moderna para uso de arrays que é a classe Vector
		
		vetor != vector

*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<int> num1; // cria um vector do tipo int com o nome num
	vector<int>num2;
	vector<int> num3(5);// Eu posso especificar o tamanho mas nao preciso	
	
	
	int tam, i;
	
	num1.push_back(1);// insere um elemento no final de um vector
	num1.push_back(2);
	num1.push_back(3);
	num1.push_back(4);
	
	num2.push_back(5);
	num2.push_back(6);
	num2.push_back(7);
	num2.push_back(8);
	
	
	
	tam = num1.size(); // retorna o tamanho do vector e armazenando na variavel tam
	cout << "Tamanho do vector: " << tam << endl;
	
	for(i = 0; i < tam; i++){ //  tam = num.size()
		cout <<num1[i] << " ";
	}
	cout << "\n";
	
	for(i = 0; i< num2.size();i++){
		cout << num2[i] << " ";
	}
	
	// metodo swap a troca de valores de dois vector 
	
	num1.swap(num2);
	cout << endl << endl;
	
	for(i = 0; i < tam; i++){ //  tam = num.size()
		cout <<num1[i] << " ";
	}
	cout << "\n";
	num2.insert(num2.begin()+1,666);  // insere em qulquer outro lugar
	num2.insert(num2.end()-1,0);
	num2.erase(num2.begin());// apaga e remove o valor
	num2.erase(num2.begin());
	
	for(i = 0; i< num2.size();i++){
		cout << num2[i] << " ";
	}
	
	cout << "\nPrimeiro elemento de num1: " << num1.front() << endl;
	cout << "Ultimo elemento de num1: " << num1.back() << endl;
	cout << "Pega do meio: "<< num1.at(2) << endl;
	
	while(!num1.empty()){ // Apaga o vector
		num1.pop_back();
	}	
	cout << "novo tamanho de num1: " << num1.size();
	
	
	return 0;
}

