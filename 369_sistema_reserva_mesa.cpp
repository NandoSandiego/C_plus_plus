#include <iostream>
using namespace std;


	int main(){
		int cod_mesa[30], cod_ant[30], qtd_mesa[150];
	
		cod_ant[0] = 0;
		cod_mesa[0] = 1;
		
		for(int i = 0; i < 30 ; i++){
			
				cout << "Digite o codigo da mesa "<< i+1 << " : ";
				cin >> cod_mesa[i];
				
								
				
				if(cod_mesa[i] == cod_ant[i]){
					
					cout << "Codigo ja usado \n";
					i--;
					
				} else{
					
					cod_ant[i] = cod_mesa[i];
						
					cout << "A quantidade de cadeiras:  ";
					cin >> qtd_mesa[i];
				
					if(qtd_mesa[i] > 5 ){
						cout << "A quantidade ultrapassa o numero... \n";
						i--;
					}
				
				}
				
				
				
				
			}		
				
					return 0;
	}
	
			
	
	


