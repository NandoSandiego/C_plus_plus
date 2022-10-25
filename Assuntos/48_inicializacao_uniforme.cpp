//				C++11
// Cria uma padronização na inicialização
 
 #include <iostream>
 #include <vector>
 #include <map>
 
 using namespace std;
 
 struct Pessoa{
 	string nome;
 	int idade;
 };
 
 class Veiculo{
 	public:
 		int tipo;
 		string nome;
 	
 	/*
	 Veiculo(int tp, string no){ //Metodo construtor
 		tipo = tp;
 		nome = no;
	 } //Com o C++11 eu nao preciso determinar o construtor
	*/ 
 	
 };
 
 int main(){
 	
 	//Variaveis simples
	//int num = 10; //modo antigo
 	int num{10}; // modo atual
 	
 	
	string nome{"Nando"};
 	
 	vector<int>valores{1,2,3,4,5};
 	
 	map<string,string>capitais{{"MG","Belo Horizonte"}};
 	
 	Pessoa p1{"Nand0",33};
 	Pessoa p2{"Leo",18};
 	
 	Veiculo v1{1,"Jipoca"};
 	
 	int vetor[]{5,4,3,2,1,0};
 	
 	
 	cout << num << endl;
 	cout << nome << endl;
 	
 	for(vector<int>::iterator it = valores.begin(); it != valores.end(); it++ ){
 		cout << *it << endl;
	 }
	 
	 for(map<string,string>::iterator it = capitais.begin(); it != capitais.end(); it++ ){
 		cout << it->first << " - "<< it->second << endl;
	 }
	 
	 cout << p1.nome << endl;
	 cout << p1.idade << endl;
	 
	 cout << v1.tipo << " - " << v1.nome << "\n";
	 
	 cout << vetor[3] << endl;
 	
 	return 0;
 }
