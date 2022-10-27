/*
	Mais uma das maneiras de percorrer um percorrer um container

	� uma fun��o que recebe 3 parametros: posi��o inicial, 
	posi��o final, e a fun��o que vai operar os elementos.
	
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	
	vector<int> n{0,1,2,3,4,5,6,7,8,9};
	//tradicionalmente...
	//Com iterator
	vector<int>::iterator it;
	
	for( auto it = n.begin(); it != n.end(); it++){
		cout << *it << " ";
	} 
	
	cout << endl;
	
	// for com base em intervalo
	
	for(auto it:n){
		cout << it << " ";
	}
	
	cout << endl;
	
	// For each
	
	for_each(n.begin(),n.end(),[](int num){
	cout  << num << " ";
	}); //� como se fosse uma fun��o
	
	cout << endl;
	//Somar 10 em cada elemento
	
	for_each(n.begin(),n.end(),[](int num1){
		num1+=10;
	cout  << num1 << " " ;
	}); //� como se fosse uma fun��o
	
	cout << endl;
	
	
	
	
	return 0;
}

