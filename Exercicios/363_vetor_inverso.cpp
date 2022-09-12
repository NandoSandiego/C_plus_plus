#include <iostream>
using namespace std;


int main() {
	
	int  vet[10] , i = 0, num, tot_vet;
	float inv_vet[10]; 
	
	
		cout << "Digite um numero: " << 1 << " :";
		cin >> num;	
	
	while( i <= 10 && num > 0 ){
		
		vet[i] = num;
		inv_vet[i] = 1/num;
		
		tot_vet +=1;
			
		cout << "Digite um numero: " <<  tot_vet +1 << " :";
		cin >>  num;
		
		
	}
	
	if(tot_vet == 0){
		cout << "O vetor nao tem elementos";
	}else{
		
		tot_vet--;
		
		for(int r = 0; r <=tot_vet; r++){
			cout << "inversos sao: "<< inv_vet[r] << " \n";
		}
		
	}
	
	
	
	
	return 0;
}
