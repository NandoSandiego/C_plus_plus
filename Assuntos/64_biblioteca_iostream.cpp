/*
<iostream> define o fluxo de entrada e saida de dados
implementa o get (lê caractere por caractere) e o
getline (mais eficiente trabalha com arquivos, le a string inteira)

gcount -> retorna o numero de caracteres que foi
        extraido da ultima operação de entrada

 ignore ->extrai determinado caractere da sequencia de entrada e descarta

*/

#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");

    int idade;
    char nome[50];
    char n,s;
/*
    cout << "Nome: ";
    //cin.get(nome,50);
    cin.getline(nome,50);


    cout << "Idade: ";
    cin>> idade;

    cout << nome << " Tamanho: " << cin.gcount() << endl;
*/
    n = cin.get();
    cin.ignore(80, ' '); // entre aspas coloca o que quer ignorar

    s = cin.get();

    cout << n << " - " << s<< endl;




   return 0;
}
