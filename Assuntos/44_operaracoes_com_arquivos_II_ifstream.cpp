//Leitura o conteúdo de arquivos com a classe ifstream

#include <iostream>

#include <fstream>

using namespace std;

int main(){


	//Cria o arquivo	
	ofstream arquivo_s;
	

	
	arquivo_s.open("44_arquivo.txt");
	
	arquivo_s << "hello World \n";
	arquivo_s << "Tudo bem ? \n";
	arquivo_s << "COmo vai ? \n";
	arquivo_s << "De boa ? \n" ;
	
	
	arquivo_s.close();

	//faz a leitura do arquivo
		
	ifstream arquivo_e;
	string linhaLida;
	
	arquivo_e.open("44_arquivo.txt"); 
	
	if(arquivo_e.is_open()){

			   //passa como parâmetro o aquivo a ser lido, e a variavel que vai ser armazenada	
		while(getline(arquivo_e,linhaLida)){ //lê linha por linha do arquivo
			
			cout << linhaLida << endl;
		}
		
		arquivo_e.close();
		
	}else{
		// se nao existir ou for deletado o arquivo
		cout << "Nao foi possivel abrir o arquivo" << endl ; 
	}
	
	
	
	
	return 0;
}
