#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){
	
	char sigla[3];
	int res;
	
	printf("Digite a sigla: ");
	scanf("%s", sigla);
	
	
	
	if( stricmp(sigla, "PA") == 0 ) { // stricmp: compara ignorando letras maiúsculas/minúsculas 
		printf("Paraense \n");
	} else{
		if(stricmp(sigla, "SC") == 0){
			printf("Catarinense \n");
		} else{
			if( stricmp(sigla, "SP" ) == 0 ){
				printf("Paulista \n");
			} else {
				if(stricmp(sigla, "MG") == 0){
					printf("Mineiro \n");
				}else{
					printf("Outro estado \n");
				}
			}
		}	
	
	 } 
	
	
	
	
	
	
	
	return EXIT_SUCCESS;
}
