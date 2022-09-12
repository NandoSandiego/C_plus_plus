#include <stdio.h>
#include <stdlib.h>


int main(){
	
	char palavra[50];
	int tam_palavra = 0, i = 0;
	
	
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	
	fflush(stdin);
	
	//for(int i = 0; i < 50; i++){
		
		while(palavra[i] != '\0'){
		i++;
		tam_palavra += 1;
	   }
		
	//}
	
	
	
	
	printf("%d", tam_palavra);
	
	
	
	return EXIT_SUCCESS;
}
