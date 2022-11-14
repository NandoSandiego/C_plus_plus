#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){


    // replace_if -> substitui valores da coleção que atendam detrminada condição

    cout << "Replace if: " << endl;
    vector <int> vct1{1,4,7,2,5,8,3,6,9,0};
    replace_if(vct1.begin(),vct1.end(),[](int i){return i < 5; },10);
    for(auto x: vct1){
        cout << x << " ";
    }

    cout << endl << endl;

    //fill -> preenche uma coleção com um valor especificado
    cout << "Fill" << endl;
    vector<int>vct2(10);
    fill(vct2.begin(),vct2.end(),10);
    for(auto x:vct2){
        cout << x << " ";
    }

     cout << endl << endl;

     //remove ->  remove um valor indicado da coleção
     cout << "remove "<< endl;
     vector<int>vct3{2,1,23,2,4,6,3,6,2,5,3,2,7,35,2,4,2};
     int qtd = count(vct3.begin(), vct3.end(),2);
     remove(vct3.begin(),vct3.end(),2);
     vct3.resize(vct3.size()-qtd);
     vct3.shrink_to_fit();
     for(auto x:vct3){
        cout << x << " ";
     }

     cout << "\n\n";

     //unique -> remove elementos duplicados consecutivos na coleçao
     cout << "unique" << endl;
     vector<int>vct4{0,1,2,3,3,3,4,5,6,3,7,8,9};
     vector<int>:: iterator it;
     it = unique(vct4.begin(),vct4.end());
     vct4.resize(distance(vct4.begin(),it));
     for(auto x: vct4){
        cout << x << " ";
     }

     cout << "\n\n";

     //reverse -> inverte a ordem dos elementos
     cout << "reverse " << "\n";
     vector<int>vct5{0,1,2,3,4,5,6,7,8,9};
     reverse(vct5.begin(),vct5.end());
     for(auto x: vct5){
        cout << x << " ";
     }

     cout << endl << endl;

     //sort -> Orena os elementos da coleçao
     cout << "Sort" << endl;
     vector<int>vct6{9,0,5,4,6,2,3,7,8,1};
     sort(vct6.begin(),vct6.end());
     for(auto x : vct6){
        cout << x << " ";
     }

     //is_sorted -> verifica se a coleção está ordenada
     cout << "is sorted" << endl;
     vector<int>vct7{0,8,5,4,7,6,3,2,1,9};

     if(is_sorted(vct7.begin(),vct7.end())){
        cout << "Ordenada" << endl;
     }else{
        cout << "Coleção nao ordenada" << endl;
     }

    cout << "\n\n";

    //merge - > mescla duas coleções e armazena em um terceiro container
    cout << "merge " << endl;
    vector<int>vct8{0,1,2,3,4};
    vector<int>vct9{5,6,7,8,9};
    vector<int>vct10(10);
    merge(vct8.begin(),vct8.end(),vct9.begin(),vct9.end(),vct10.begin());
    for(auto x:vct10){
        cout << x << " ";
    }

    cout << endl << endl;
    //set_union -> união de duas coleções
    cout << "set_union" << endl;
    vector<int>vct11{4,0,3,2,1};
    vector<int>vct12{9,5,8,7,6};
    vector<int>vct13(10);
    set_union(vct11.begin(),vct11.end(),vct12.begin(),vct12.end(), vct13.begin());
    for(auto x: vct13){
        cout << x << " ";
    }

    cout << "\n\n";

    //set_intersection -> interseção de duas coleções
    cout << "set_intersection" << endl;
    vector<int>vct14{0,1,2,3,4};
    vector<int>vct15{2,3,4,5,6};
    vector<int>vct16(3);
    set_intersection(vct14.begin(),vct14.end(),vct15.begin(),vct15.end(), vct16.begin());
    for(auto x: vct16){
        cout << x << " ";
    }

    cout << "\n\n";

     //set_diference-> diferenca entre duas coleções

    cout << "set_difference" << endl;
    vector<int>vct17{0,1,2,3,4};
    vector<int>vct18{2,3,4,5,6};
    vector<int>vct19(7);
    set_difference(vct17.begin(),vct17.end(),vct18.begin(),vct18.end(), vct19.begin());
    for(auto x: vct19){
        cout << x << " ";
    }



    cout << "\n\n";

     //min e max -> retorna o menor e o maior valor
     cout << "Min e Max" << endl;
     int n1,n2;
     n1 = 10;
     n2 = 5;
     cout << "Menor: " << min(n1,n2) << endl;
     cout << "Maior: " << max(n1,n2) << endl;

     cout << "\n\n";

     //minmax -> retorna o menor e o maior
     cout << "minmax" << endl;

     int n3 = 10,n4 = 5, n5 = 10, n6 = 3, n7 = 8,n8 = 9;
     auto res = minmax({n3,n4,n5,n6,n7,n8});
     cout << "Menor: " << res.first << endl;
     cout << "Maior: " << res.second << endl;



   return 0;
}
