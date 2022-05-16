#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int pol;
	float cent;
	
	for(int i = 1; i <= 20; i++){
		
		cent = 2.54 * pol * i;
			
		printf("%d polegada = %.2f centimetros \n", i, cent );
		
	}
	
	
	
	return EXIT_SUCCESS;
}
