#include <iostream>
using namespace std;


int fatorial(int num){
	
	if(num == 0){
		return 1;
	}
	
	return num * fatorial (num -1);
	
//	int fat = 1;
//	
//	for(int i = 1; i <= num; i++ ){
//		
//		fat *= i + fatorial(i);
//	}
//	
//	return fat;	
		
}

int main (){
	
	int num, fato;
	
	cout << "Digite o numero:";
	cin >> num;
	
	fato = fatorial(num);
	
	cout << "O fatorial de "<< num << " e: " << fato;
	
	
	
	return 0;
}
