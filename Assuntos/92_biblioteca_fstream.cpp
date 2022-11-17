/*
    in = input(leitura)
    out = output(escrita)
    binary = modo binário
    ate = abre para a escrita e posiciona no final
    app = append, abre para escrita sem deletar o conteúdo atual, posiciona no final
    trunc = truncate, abre para a escrita e remove o conteúdo atual antes de abrir
    write = escreve no arquivo
    read = le o arquivo

    tellp = retorna a posição do ponteiro dentro do sistema
    seekp = define a posição do ponteiro dentro do stream

    beg,cur,end = constantes para definir a posição no stream


*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    fstream arquivo;
    string linha;
    char linha_b[255];

    arquivo.open("biblioteca_fstream.txt",fstream::in|fstream::out);

    if(arquivo.is_open()){ //verifica se o arquivo esta aberto
        arquivo << "Curso de C++ \n" << "Biblioteca fstream" << endl;
    }else{
        cout << "Arquivo nao esta aberto" << endl;
    }

    arquivo.close();
    cout << endl;


    //////////////////////////////////////////////////////qq

    arquivo.open("biblioteca_fstream_I.txt",fstream::in);
    if(arquivo.is_open()){//Verifica se o arquivo esta aberto
            while(getline(arquivo,linha)){
                cout << linha << endl;
            }
    }else{
        cout << "Arquivo nao esta abrto" << endl;
    }

    arquivo.close();
    cout << endl;

    //////////////////////////////////////////

    arquivo.open("biblioteca_fstream_I.txt", fstream::out | fstream::app);

    if(arquivo.is_open()){ //verifica se o arquivo está aberto
        arquivo.write("Ola mundo, tudo bem ? \n",26);
    }else{
        cout << "Arquivo nao está aberto" << endl;
    }

    arquivo.close();
    cout << endl;

    ////////////////////////////////////////

    arquivo.open("biblioteca_fstream_I.txt",fstream::in | fstream::app );
    arquivo.read(linha_b,255);
    cout << linha_b << endl;
    arquivo.close();
    cout << endl;

    ////////////////////////////////////////////////////
    long pos;
    arquivo.open("biblioteca_fstream_I.txt",fstream::out);
    arquivo.write("Hello World",11);
    pos = arquivo.tellp();//Posição 11
    cout << pos << endl;
    arquivo.seekp(pos - 5);
    pos = arquivo.tellp(); // Posição 5
    cout << pos << endl;
    arquivo.write("APRENDIZADO",11);
    arquivo.close();
    cout << endl;



    ////////////////////////////////////////////////////


    long pos2;
    arquivo.open("biblioteca_fstream_I.txt",fstream::out);
    arquivo.write("COmo esta", 9);
    pos2 = arquivo.tellp();
    arquivo.seekp(arquivo.beg +4);
    pos2 = arquivo.tellp();
    arquivo.write(" Nando ", 7);
    arquivo.close();
    cout << endl;



   return 0;
}
