#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float alt_c = 1.5, alt_j = 1.1;
	int anos;
	
	while (alt_j <= alt_c){
		
		alt_c += 0.2;
		alt_j += 0.3;
		anos++;
	}
	
	printf("%d", anos);
	
	return EXIT_SUCCESS;
}

