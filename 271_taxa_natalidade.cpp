#include <stdio.h>
#include <stdlib.h>


int main (){
	
	int hab_A = 5000000, hab_B = 7000000, anos = 0;
	
	while(hab_A <= hab_B){
		
		hab_A *= 1.03;
		hab_B *= 1.02;
		anos ++;
		
	}
	
	printf("%d",anos);
	
	
	
	
	return EXIT_SUCCESS;
}
