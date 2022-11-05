/*

    at -> retorna o elemento na posição indicada
    back -> retorna a referencia para o ultimo elemento da string


*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    string txt("Estudo sobre bibliotecas na liguaggem de programacao C++");
    string txt1("Ola tudo bem ?");
    int tam = txt.size();

    for(int i = 0; i< tam; i++){
        cout << txt.at(i);//txt[i]; //
    }
    cout << endl;
    cout << txt.back();
    //back tbm pode ser usado para substituir o ultimo elemento

    txt.back() = '*';

    txt.front() = '#';
    cout << txt << endl;

    //Funções modificadoras

    txt1.append(" Nando"); //txt1 +=  " Nando";//Concatena strings
    cout << txt1 << endl;

    txt1.push_back('@'); // Adiciona no fim;

    cout << txt1 << endl;
    txt1.pop_back(); // remove o ultimo caractere da string
    cout << txt1 << endl;

    txt1.assign("OUtra coisa"); // txt1 = "OUtra coisa"; substitui a string
    cout << txt1 << endl;
      txt1.insert(1,"u");  // insere em um local especifico

      txt1.insert(5, " - ");
      cout << txt1 << endl;

      //remove determinado conteudo da string
      txt1.erase(1,7);// (posição inicial, quantidade que vai apagar)
      cout << txt1;

      txt.replace(0,5, "coisa");//substitui parte da nossa string(ponto inicial, quantidade de elementos, o elemento, pelo que vai ser substituido )
      cout << txt1 << endl;

      //troca conteudo de uma string

      txt1.swap(txt);
      cout << txt << endl;
      cout << txt1 << endl;




   return 0;
}
