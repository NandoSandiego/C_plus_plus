#include <iostream>
using namespace std;

int fibonacci(int num){
	
	if(num == 1 || num == 2){
		return 1;
	}
	
	
	return fibonacci(num-1) + fibonacci(num-2);
}


int main(){
	
	int num, fib;
	
	cout << "Digite um nuemro: ";
	cin >> num;
	
		for(int i = 0; i <num ;i++){
		
		cout << fibonacci(i + 1) << " ";
	}
	
	//fato = fatorial(num);
	
	//fib = fibonacci(num);
	
	//cout << fib;
	
	return 0;
}

