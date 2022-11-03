#include <iostream>
#include <ctime> // time.h
#include <cmath> // math.h

using namespace std;

int numeros_primos(int n){
    int i,j;
    int freq = n-1;

    for(i = 2; i <= n; i++){
        for(j =sqrt(i); j > 1; --j){
            if(i % j == 0){
                --freq;
                break;
            }
        }
    }

    return freq;
}

int main(){

    int primos;
    clock_t t, t1, t2, t3;// retorna o tempo de processamento decorrido dentro do prorama
    t = clock();

    t1 = clock();
    primos = numeros_primos(999999);
    t = clock() - t;


    cout << "qtd de primos: " << primos << endl;
    cout << "Tempo de cpu: " << (float)t/CLOCKS_PER_SEC << " segundos"<< endl;

    //dif time -> retorna a diferença de dois times

    t2 = clock();
    t3 = difftime(t2,t1);
    cout <<"Diferença: " <<  (float)t3/CLOCKS_PER_SEC << " segundos" << endl << endl;

    //time -> obtemos a data e hora local

    // 00:00 de 1 de Janeiro de 1970

    time_t temp;

    time(&temp);

    cout << temp << " segundos desde 00:00 - 01/01/70"<< endl << endl;

    //Asctime -> converte a struct_tm  em string
    //struct tm -> converte um elemento do tipo time tpara struct tm

   time_t t_atual;
    struct tm * infoTempo;
    infoTempo = localtime(&t_atual);

    time(&t_atual);
    infoTempo = localtime(&t_atual);

    cout << asctime(infoTempo) << endl;
    cout << infoTempo->tm_sec << endl;
    cout << infoTempo->tm_mday << endl;
    cout << infoTempo->tm_year<< endl;

    //ctime converte o valor do tipo time_t para string mas nao precisa da struct tm
    cout << ctime(&t_atual) << endl;

    // formata a saida


   return 0;
}

