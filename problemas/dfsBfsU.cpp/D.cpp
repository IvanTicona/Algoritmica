#include<bits/stdc++.h>

using namespace std;


const int nodos = 10000;

bool vis[nodos];
vector<int> grafo[nodos];
int niveles[nodos];

void BFS(int nodoInicial){
  queue<int> cola;
  cola.push(nodoInicial);
  while(!cola.empty()){
    int nodoActual = cola.front(); //obtenemos el primer elemento de la cola
    cola.pop(); //eliminamos el primer elemento de la pila
    if(vis[nodoActual]) continue;
    vis[nodoActual] = true;
    //empezamos a visitar a sus amigos
    for (int i = 0; i < grafo[nodoActual].size(); i++){
      int amigo = grafo[nodoActual][i];
      niveles[amigo] = niveles[nodoActual]+1;
      if (!vis[amigo]){
        cola.push(amigo);
      }
    }
  }
}


vector<int> redNodes[30];

int main(){

  int connections;
  while (cin>>connections && connections){
    int a,b;

    for (int i = 0; i < connections; i++){
      cin>>a>>b;
      redNodes[a].push_back(b);
      redNodes[b].push_back(a);
    }

    int start, ttl;
  }
  

  return 0;
}