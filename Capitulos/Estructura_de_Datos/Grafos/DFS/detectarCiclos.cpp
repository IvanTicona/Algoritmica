#include<bits/stdc++.h>

using namespace std;

vector<int> grafo[1000];
int vis[1000];
int padre[1000];

bool dfs(int nodoInicial){

  stack<int> pila;
  pila.push(nodoInicial);
  padre[nodoInicial] = -1;

  while (!pila.empty()){
    int nodoActual = pila.top();
    pila.pop();
    if(vis[nodoActual]) continue;
    vis[nodoActual] = true;

    for (int i = 0; i < grafo[nodoActual].size(); i++){
      int vecino = grafo[nodoActual][i];
      if(vecino==nodoInicial) return true;
      if (!vis[vecino]){
        padre[vecino] = nodoActual;
        pila.push(vecino);
      }
    }
  }
  return false;
}


int main(){

  bool ciclos=false;
  for (int i = 0; i < sizeof(grafo)/sizeof(grafo[0]); i++){
    memset(padre,0,sizeof(padre));
    if (dfs(i)) {
      ciclos=true;
      for (int nodo = i; nodo != -1; nodo=padre[nodo]){
        cout<<nodo;
      }
    }
  }
  cout<<ciclos;

  return 0;
}