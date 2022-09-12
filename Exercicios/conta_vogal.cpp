#include <stdio.h>
#include <stdlib.h>


int main(){
	
	char palavra[50];
	int consoante = 0, vogal = 0, i = 0;
	
	
	printf("Digite seu nome: ");
	scanf("%s", palavra);
	
	while(palavra[i] != 0){
		
		i++;
		
		if(palavra[i] == 65 || palavra[i] == 69|| palavra[i] == 73 || palavra[i] == 79 || palavra[i] == 85 || palavra[i] == 97 || palavra[i] == 101|| palavra[i] == 105 || palavra[i]==111 || palavra[i] == 117 ){
			
			vogal +=1;
			
		}else{
			consoante += 1;
		}
	}
	
	printf("Consoante: %d \n Vogal: %d \n", consoante, vogal);
	
	
	
	return EXIT_SUCCESS;
}
