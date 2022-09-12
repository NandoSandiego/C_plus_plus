#include <iostream>
#include <stdlib.h>
using namespace std;


int main(){
	
	char palavra[30], letra[1], secreta[30];
	int tam = 0, i = 0, chances = 6, acertos = 0;
	bool acertou = false;
	
		
	
	cout << "Digite a palavra secreta: " ;
	cin >> palavra;
	system("cls");
	
	while(palavra[i]!= '\0'){ // \0 -> Caractere do enter.
		
		i++;	
		tam += 1;
	}
	
	for(i = 0; i < 30; i++) {
		secreta[i] ='-';
	}
	
	while(chances > 0 &&  acertos < tam){
		
		cout << "Chances restantes: " << chances << "\n\n";
		cout << "Palacra secreta: ";
		
		for(i = 0; i < tam; i++){
			cout << secreta[i];
		}
		
		cout << "\n\n Digite uma letra: ";
		cin >> letra[0];
		
		for(i = 0; i < tam; i++ ){
			
			if(palavra[i] == letra[0]){
				acertou = true;
				secreta[i] = palavra[i];
				acertos++;
			}
		
		}
		
		if(!acertou){
			chances --;
		}
		
		acertou = false;
		system("cls");
	
	}
	
	if(acertos == tam){
		cout <<"Voce venceu!!! \n\n";
	}else{
		cout << "Que pena, voce perdeu \n\n";
	}
	
	system("pause");
	
	return 0;
	
	
	
	
	
	//printf("Digite a palavra secreta: ");
	//scanf("%s", palavra);
	
	
	
	
	
	//return 0;
}
