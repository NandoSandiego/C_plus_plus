#include <iostream>
using namespace std;


int main (){
	
	int conj_10[10], conj_20[20];
	
	
	cout << "Digite 10 valores do conjunto 1:  \n";
	
	for(int i = 0; i < 10; i++){
		
		cout << "Valor de " << i+1 << " :";
		cin >> conj_10[i];
	} 
	
	system("pause");
	system("cls");
	
	
	cout << "Digite 20 valores do conjunto 2: \n";
	
	for(int i = 0; i < 20; i++ ){
		
		cout << "Valor de " << i+1 << " :";
		cin >> conj_20[i];
		
	}
	
	system("pause");
	system("cls");
	
	for(int i = 0; i < 20; i++){
		
		if(conj_10[i] == conj_20[i]){
			
			cout << conj_20[i] << "\n";
		}else{
			cout << "Nao existe elementos em comum.";
		}
		
	}
	
	return 0;
}
