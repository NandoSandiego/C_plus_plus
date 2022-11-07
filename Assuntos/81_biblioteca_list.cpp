#include <iostream>
#include <list>


using namespace std;


bool par(const int& value){
    return  ((value%2) == 1);
}

int main(){

    list<int> list1;
    list<int> list2(10,0);//dez elementos 0
    list<int> list3(list2);
    list<int> list4 = {1,2,3,4};

    for(auto it = list4.begin();it != list4.end(); it++ ){
        cout << *it << " ";
    }
    cout << endl;
    //funções modificadoras

    list<int>list5;
    list5.assign(5,1);
    list5.push_back(8); //pop_back()
    list5.push_front(4);//pop_front()

    list<int>::iterator it;
    it = list5.begin();
    list5.erase(it);

    for(auto x:list5){
        cout << x << " ";
    }
    // operaçoes dentro da lista

    list2.remove(0);
    list2.remove_if(par);

    list5.unique();  //remove os elementos duplicados
    list1.merge(list3);//mescla duas listas

    for(auto x:list2){
        cout << x <<" ";
    }

   return 0;
}
