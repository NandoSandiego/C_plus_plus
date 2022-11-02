/*
    EXIT_SUCCESS -> Termina pela metade
*/
#include <iostream>
#include <cstdlib>

using namespace std;

void fim(){
cout << "FIm do programa " << endl;
}


int main(){

    const char* p;


    for(int i = 0; i < 10; i++){


        atexit(fim); // Chama a função fim
        if(i < 5){
            cout << i << endl;
        }else{
            exit(EXIT_SUCCESS); // Necessita de um parametro EXIT_FAILURE = 0, EXIT_SUCCESS = 1
            cout << i << endl;
        }

    }
    _Exit(EXIT_SUCCESS);
    cout << endl;

/*    p = getenv('PATH');
    cout << p << endl;
*/

   return 0;
}
