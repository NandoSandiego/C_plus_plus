#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float venda[100], compra[100], lucro;
	int menos_10 = 0, meio = 0, mais_20 = 0;
	
	
	for(int i = 0; i <5; i++ ){
		
		printf("Digite o preco de venda: ");
		scanf("%f", &venda[i]);
		printf("Digite o preco de compra: ");
		scanf("%f", &compra[i]);
		
		lucro = compra[i]/venda[i] * 100 ;
		
		system("cls");
		
		if(lucro > 90 ){
			menos_10 +=1;
		} else if(lucro < 80){
			meio += 1;
		} else{
			mais_20 += 1;
		}
		
	}
	
	
	printf("-----------------------\n");
	printf("Lucro menor de 10%: %d \n", menos_10);
	printf("Lucro de 10% a 20%: %d \n", meio);
	printf("Lucro maior de 20%: %d \n", mais_20);
	
	
	return EXIT_SUCCESS;
}
