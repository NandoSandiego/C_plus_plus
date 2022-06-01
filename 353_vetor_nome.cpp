#include <stdio.h>
#include <stdlib.h>
//using namespace std;

int main(){
	
	char nome[2][50];
	
	for(int i = 0 ; i <2 ; i++){
		
		printf("Digite o %d nome: ", i+1 );
		gets(nome[i]);
		//scanf("%s", &nome[i]);
		fflush(stdin);
		
		
	}
	
	for(int i = 0; i <2; i++ ){
		printf("%d - %s \n",i+1,nome[i]);
	}
		
	
	
	return 0;
}
