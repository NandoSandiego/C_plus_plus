#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char palavra[30], letra[1], secreta[30];
	int tam, i, chances, acertos;
	float acerto;
	
	chances = 6;
	tam = 0;
	acerto = false;
	acertos = 0;
	
	printf("Digite a palavra secreta: ");
	scanf("%s", &palavra);
	system("cls");
	
	while(palavra != '\0'){
		i++;
		tam++;
	}
	
	for(i = 0; i < 30; i++){
		secreta[i] = "-";
	}
	
}
