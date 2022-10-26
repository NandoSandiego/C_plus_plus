/*
 forma simplificada e dinâmica
 função Lambda é uma função anônima e pode ser anexada a 
 uma variavel ou a uma função, podendo ser declarada em 
 qualquer parte do programa.
 nao sendo mais necessario mais prototipar e nem com o nome
 
 [](){};
 
 [captura de variaveis](parâmetros)-> tipo de retorno{
 		corpo da função
};

*/

#include <iostream>
#include <vector>

using namespace std;


int main(){
	
	//Variaveis 
	
	int x1 ,x2, x3, x4, x5, x6, x7, x8, x9;
	x1 = 10;
	x2 = 5;
	x3 = 2;
	x4 = 12;
	x5 = 5;
	x6 = 4;
	x7 = 54;
	x8 = 3;
	x9 = 3;
	
	
	
	//retorna o maior
	
	auto maior = [](int n1, int n2)->int{
		
		
		/*
			If Comum
			
		if(n1 > n2){
			return n1;
		}else{
			return n2;
		}
		*/
		return (n1 > n2) ? n1 : n2; // if ternário
	};
	
	cout << maior(8,-9) << endl;
	
	// maior termo no vector
	
	auto maiorVct = [](vector<int>vct)->int{
		
		auto m = 0;
		
		for(int x: vct){
			m = (m > x) ? m : x;
			
		}
		
		return m;
	};
	
	cout << maiorVct({2,5,2,7,9,5,-3,199,3}) << endl;
	
	//Lambdas usando variaveis
	
	auto soma = [x1,x2,x3,x4]()->int{
	
		return x1 + x2 + x3 + x4; 
	};
	
	cout << soma() << endl;
	
	//usando TODAS as variaveis do escopo
	
	auto somaTodas = [=]()->int{
	
		return x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8 + x9; 
	};
	
	cout << somaTodas() << endl;
	
	// usando variaveis e parametros
	
	//Pega o maior e soma as variaveis
	
	auto maiorTodas = [=](vector<int>td)->int{
		
		auto m = 0;
		for(int x: td){
			m = (m > x) ? m : x;
		}
		
		return m + x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8 + x9; 
	}; 
	
	cout << maiorTodas({1,2,3,4,5,6,7,8,9}) << endl;
	
	
	return 0;
	
	
}



