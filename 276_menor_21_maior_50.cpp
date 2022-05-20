#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int idade, tot_21 = 0, tot_50;
	
	printf("Digite a idade: ");
	scanf("%d", &idade);
	
	while(idade > 0 ){
		
		if(idade < 21 ){
			tot_21++;
		}
		
		if(tot_50 > 50){
			tot_50++;
		}
		printf("Digite a idade: ");
		scanf("%d", &idade);
		
		
	}
	
	printf("Menores de 21 anos: %d \n", tot_21);
	printf("Maiores que 50 anos: %d \n", tot_50);
	
	
	
	
	return EXIT_SUCCESS;
}
