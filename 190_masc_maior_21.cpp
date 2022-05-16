#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nome[50], sexo;
	int idade;
	
	for(int i = 1; i <= 20; i++ ){
		

		
		printf("Digite o nome: ");
		gets(nome);
		printf("Digite o sexo: ");
		scanf("%c", &sexo);
		printf("Digite a idade: ");
		scanf("%d", &idade);
		
		    fflush(stdin); // Limpa e libera o buffer de saída 
		    
		
		if( sexo == 'M' || sexo == 'm' && idade >21){
			printf("%s \n", nome);
		}
		
		
		
	}
	
	
	
	return EXIT_SUCCESS;
}
