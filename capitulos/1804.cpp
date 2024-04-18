#include<bits/stdc++.h>

using namespace std;
// #define input freeopen("input.txt","r",stdin);
// #define output freeopen("output.txt","w",stdout);

int main(){
  // input;
  // output;
  
  //LISTAS
  list<int> listita;
  listita.push_back(1);
  listita.push_back(2);
  listita.push_back(3);

  //::iterator es un puntero a un elemento de la lista
  list<int>::iterator it;

  //Recorriendo la lista, it es un puntero
  //.begin() retorna un puntero al primer elemento
  //.end() retorna un puntero al ultimo elemento
  //*it retorna el valor del puntero

  for (it = listita.begin(); it != listita.end(); it++){
    cout<<*it<<endl;
  }



  return 0;
}