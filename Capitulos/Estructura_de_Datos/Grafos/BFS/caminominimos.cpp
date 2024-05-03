#include<bits/stdc++.h>

using namespace std;

vector<int> grafo[1000];
bool vis[1000];
int longitud[1000];
int padre[1000];

void bfs(int nodoInicial, int searched){
  queue<int> cola;
  cola.push(nodoInicial);
  longitud[nodoInicial] = 0;
  padre[nodoInicial] = -1;
  while (!vis[searched]){
    int nodoActual = cola.front();
    cola.pop();
    if(vis[nodoActual]) continue;
    vis[nodoActual] = true;
    for (int i = 0; i < grafo[nodoActual].size(); i++){
      int amigo = grafo[nodoActual][i];
      longitud[amigo] = longitud[nodoActual] + 1;
      if(!vis[amigo]){
        padre[amigo] = nodoActual;
        cola.push(amigo);
      }
    }
  }
}

int main(){


  return 0;
}