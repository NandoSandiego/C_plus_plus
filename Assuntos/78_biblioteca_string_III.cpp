/*
    find -> encontra uma determinada ocorrencia retornando a posição
    substr ->  uma nova estring de acordo com uma posição indicada em uma string ja existente
    compare -> ela compra duas strings
            retorna 0, duas iguais;

    stoi -> converte a string para inteiro
    to_string -> converte para testo
    stol -> string para long int
    stoll -> string para long long int
    stoul -> unsigned
    stoull -> unsigned to long long
    stof -> string para floaf
    stod -> string para double
    stold -> string para long double
*/
#include <iostream>
#include <string>

using namespace std;

int main(){

    string txt1("Curso de C++ - Biblioteca string");
    string txt2;

   size_t encontrado = txt1.find("de");

    cout << encontrado << endl;

   if(encontrado != string::npos){ //mebro estatico, constante estatica que contem o valor maximo possivel de size_t
        cout << "Encontrado, pos: " << encontrado << endl;
   }else{
        cout << "nao encontrado" << endl;
   }

   txt2 = txt1.substr(15,10); //(A partir de, quantidade de caracteres);
   cout << txt2 << endl;

   if(txt1.compare(txt2) == 0){
        cout << "Strings iguais" << endl << endl;
   }else{
        cout << "Strings diferentes" << endl << endl;
   }

    // Funções de conversão

    string idade("18"), txt4;
    int ano =2022,res;

    //res = ano - idade; // nao e possivel por que ele nao consegue fazer essa conversao
    res = ano - stoi(idade);
    cout << res << endl;

    //txt4 = res;
    txt4 = to_string(res);
    cout << txt4 << endl;



   return 0;
}
