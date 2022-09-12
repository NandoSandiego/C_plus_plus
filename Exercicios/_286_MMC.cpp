#include <iostream>
using namespace std;


int main (){
	
	int num_A, num_B, menor = 0, mmc = 0;
	
	cout << "Digite um numero: ";
	cin >> num_A;
	cout << "Digite outro numero: ";
	cin >> num_B;
	
	if(num_A < num_B){
		menor = num_A;
	}else{
		menor = num_B;
	}
	
	mmc = menor;
	
	while (mmc % num_B != 0  ){
		
		
		mmc += menor;
		
	}
	
	cout << "Menor : " << menor;
	
	
	return 0;
}
