#include <stdio.h>
#include <stdlib.h>

int main(){
	char times[30][12];
	
	for(int i = 0; i < 2; i++ ){
		
		printf("Digite o %i º time ", i+1);
		//scanf("%c", )
		gets(times[i]);
		
	}
	
	printf("========TIMES========  \n");
	
	for(int i = 0; i < 2; i++){
		printf("%s \n", times[i]);
	}
	
	return 0;
}
