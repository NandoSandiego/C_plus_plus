#include <iostream>
using namespace std;


int main(){
	
	int cod_mesa[30],qtd_mesa[30],codigo,lugares,lug_mesa ;
	
		for(int i = 0; i < 30; i++ ){
			cod_mesa[i] = 100 + i;
			qtd_mesa[i] = 5;
		}
		
		lugares = 150;
		
		cout << "Entre com um codigo entre 100 e 129, ou 0 pra terminar";
		cin >> codigo;
		
		while(codigo > 0 && lugares != 0){
			int i = 0;
			
			while(codigo != cod_mesa[i] && i < 29 ){
				i++;
			} 
			
			if(codigo == cod_mesa[i]){
				
				cout << "Quantidades de lugares a reservar: ";
				cin >> lug_mesa;
				
				if(qtd_mesa[i] >= lug_mesa){
					qtd_mesa[i] =qtd_mesa[i] - lug_mesa;
					lugares = lugares - lug_mesa;
				}else{
					cout << "NAo ha lugares a reservar";
				}
				
			}else{
				
				cout << "Codigo de mesa invalido \n";
				cout << "Entre com o codigo (100 a 129), ou 0 pra terminar";
				cin >> codigo;
				
			}
		}
		
		if(lugares == 0){
			cout << "Lotacao esgotada";
		} else{
			
			for(int i = 0; i < 30; i++){
				
				if(qtd_mesa[i] != 0){
					cout << "Mesa: "<<cod_mesa[i]<< "\n Total de lugares: "<< qtd_mesa[i];
				}
				
			}
		}
	
		/**cod_ant[0] = 0;
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
				
				
				
				
				
				
					
		}*/
	
			
	
	
	return 0;
}
