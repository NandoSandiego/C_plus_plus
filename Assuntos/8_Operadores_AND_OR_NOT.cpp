/* 	
		AND				|	     OR				|		NOT
		&&				|		 ||				|		 !
			
	A	B	A AND B		|	A	B	A OR B		|	A   	¬A
	
	V	V		V		|	V	V	   V		|	V		 F	
	V	F		F		|	V	F	   V 		|	F		 V
	F	V		F		|	F	V 	   V		|
	F	F		F		|	F	F	   F		|
*/


#include <iostream>
using namespace std;


int main(){
	
	int num = 8;
	
	if(num > 4 || num < 7){
		cout << "\n Valor aceito";
	}else{
		cout << "\n Valor nao aceito";
	}
	
	
	return 0;
}
