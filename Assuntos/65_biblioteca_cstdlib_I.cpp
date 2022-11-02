/*
    cstdlib -> repaginação da biblioteca stdlib.h
    arquivos.h são arquivos mais antigos

    função de converção

*/

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main(){

    double num1,num2;
    char numero[80];

    cout << "Digite uma palavra: ";
    cin >> numero;
    // nao pode converter char para double
    num1 = atof(numero); //atof() -> converte de alfa para float ou double

    /*FUNÇÂO DECONVERSÃO
        atof -> alfa to float;
        atoi -> alfa to int;
        atol -> alfa to long;
        atoll(c++11) -> alfa to longlong;
        astrtod -> string to double
        astrtof -> string to float
        astrtol -> string to long
        astoll -> string to long long double
    */

    //outra stdtod(numero,NULL) -> tambem converte string para double
    num2 = strtod(numero,NULL);


    cout << num1 << endl << endl;
    cout << num2 << endl << endl;


    /*FUNÇÃO DE GERAÇÃO DE NUMEROS ALEATORIOS

    */

    srand(time(NULL));// permite que os numeros aleatorios nao sejam os mesmos
    for(int i = 0; i < 10; i++ ){
        cout << rand()%100 << " "; //0 a 100
        cout << rand()%50 << " "; //0 a 50
        cout << rand()%10 << " "; //0 a 10
        cout <<endl;
    }

    cout << "\n\n\n";


    /*FUNÇÃO DE GERENCIAMENTO DINÂMICO
        calloc ->alocação de memoria
        malloc -> retorna o ponteiro pro primeiro elemento
        freelist -> libera a memoria alocada
        realloc -> aumenta ou diminui o tamanho da memoria alocada para o componente

    */

    int tam =10, num;
    int  *vetor;// ou vetor[10];

    vetor = (int*)calloc(tam,sizeof(int));
    //vetor = (int*)malloc(tam* sizeof(int));

    for(int i = 0; i < tam ; i++){
        vetor[i] = rand()%100;
        cout << vetor[i] << " - ";
    }

    free(vetor); // libera memoria armazenada

   return 0;
}
