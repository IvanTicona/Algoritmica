#include<bits/stdc++.h>

using namespace std;

const int nodos = 10000;

bool vis[nodos];
vector<int> grafo[nodos];
int niveles[nodos];


int chess[8][8];

void BFS(int nodoInicial){
  queue<int> cola;
  cola.push(nodoInicial);
  while(!cola.empty()){ //la cola no esta vacia?
    int nodoActual = cola.front(); //obtenemos el primer elemento de la cola
    cola.pop(); //eliminamos el primer elemento de la pila
    if(vis[nodoActual]) continue; //marcamos el nodo como visitado
    vis[nodoActual] = true; //marcamos el nodo como visitado
    //empezamos a visitar a sus amigos
    for (int i = 0; i < grafo[nodoActual].size(); i++){
      int amigo = grafo[nodoActual][i];
      niveles[amigo] = niveles[nodoActual]+1; //nivel del amigo es el nivel del nodo actual + 1
      if (!vis[amigo]){ //si el amigo no ha sido visitado
        cola.push(amigo); //lo agregamos a la pila
      }
    }
  }
}

int main(){

  int nodos, aristas;
  cin>>nodos>>aristas;
  for (int i = 0; i < aristas; i++){
    int nodoInicial,nodoFinal;
    cin>>nodoInicial>>nodoFinal;
    grafo[nodoInicial].push_back(nodoFinal);
  }
  
  int S,T;
  cin>>S>>T;
  BFS(S);
  if (vis[T]){
    cout<<"Si se puede llegar de "<<S<<" a "<<T<<endl;
    cout<<"El nivel de "<<T<<" es "<<niveles[T]<<endl;
  }else{
    cout<<"No se puede llegar de "<<S<<" a "<<T<<endl;
  }

  return 0;
}