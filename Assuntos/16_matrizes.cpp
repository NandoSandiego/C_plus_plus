/*
  	MATRIZ -> sao vetores bidimensionais
  					
  				 Lin  Col	
	  int matriz[ x ][ y ]
*/

#include <iostream>
using namespace std;


int main(){
	
	int matriz[3][4];
	
	for(int l = 0; l < 3; l++){
		for(int c = 0; c < 4; c++){
			cout << "valor p/ [" << l <<"][" << c << "] = ";
			cin >> matriz[l][c];
			system("cls");
		}
	}
	
	/*
	matriz[0][0] = 0;
	matriz[0][1] = 3;
	matriz[0][2] = 5;
	matriz[0][3] = 7;
	
	matriz[1][0] = 3;
	matriz[1][1] = -3;
	matriz[1][2] = 4;
	matriz[1][3] = 20;
	
	matriz[2][0] = -38;
	matriz[2][1] = -3;
	matriz[2][2] = 4;
	matriz[2][3] = 0;
	*/
	
	for(int x = 0; x < 3;x++){
		
		for(int y = 0; y < 4; y++){
			cout << matriz[x][y] << "  "; 
		}
		cout << "\n";
	}
	
	
	return 0; 
}
