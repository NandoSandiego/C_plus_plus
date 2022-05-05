#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nome[100], sexo;
	int idade;
	
	printf("Nome: ");
	scanf("%s", &nome);
	printf("Sexo: ");
	scanf("%s", &sexo);
	printf("Idade: ");
	scanf("%d", &idade);
	
	printf ("------------------------------------\n");
	
	if((sexo == 'f' || sexo == 'F' ) && (idade <25)  ) {
		printf("%s  ,\n", nome);
		printf("ACEITA");
	}else{
		printf("%s  ,\n", nome);
		printf("NAO ACEITA");
		
	}
	
	

	
	
	
	return EXIT_SUCCESS;
}
