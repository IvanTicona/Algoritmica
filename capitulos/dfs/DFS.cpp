#include<bits/stdc++.h>

using namespace std;

const int MAXN = 10000;

bool vis[MAXN]; //arreglo para marcar los nodos visitados
vector<int> grafo[MAXN]; //grafo

void DFS(int nodoInicial){
  stack<int> pila;
  pila.push(nodoInicial);
  while(!pila.empty()){ //la pila no esta vacia?
    int nodoActual = pila.top(); //obtenemos el primer elemento de la pila
    pila.pop(); //eliminamos el primer elemento de la pila
    vis[nodoActual] = true; //marcamos el nodo como visitado
    //empezamos a visitar a sus amigos
    for (int i = 0; i < grafo[nodoActual].size(); i++){
      int amigo = grafo[nodoActual][i];
      if (!vis[amigo]){ //si el amigo no ha sido visitado
        pila.push(amigo); //lo agregamos a la pila
      }
    }
  }
}

int main(){

  

  return 0;
}