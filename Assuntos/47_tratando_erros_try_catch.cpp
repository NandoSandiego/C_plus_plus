//Tratando erros com try - catch
#include <iostream>
#include <vector>
#include <stdexcept>//para usar o exception

using namespace std;

double divide(double n1, double n2);


int main(){
	
	double n1,n2, div;
	
	vector<int>num(5);
	
	num.at(0) = 10; // na há erros
	try{ // try e onde vamos inserir o código passivel de erros
		
		num.at(8) = 10;
		cout << num[0] << endl;
	
	
	
	}catch(exception& erro ){ // caso aja  o erro, iremos realizar o tratamento do erro em si
		
		cout << "Erro: "<< erro.what()<<endl;
		
		
	}
	
	
	cout << "Numerador: ";
	cin >> n1;
	cout << "Denominador: ";
	cin >> n2;
	
	try{
	
		div = divide(n1,n2);
		cout << div <<"\n";
	
	}catch(const char* msg){
		
		cout <<"Erro: " << msg << endl;
	}
	
	
	
	
	
	return 0;
}


double divide(double n1, double n2){
	
	if(n2 == 0){ // Sei que vai gerar um erro...
		throw " Erro de divisao por zero";
	}
	
	if(n1 >= 10){
		throw "NUmerador tem que ser menor que 10";
	}
	
	return n1/n2;
}


