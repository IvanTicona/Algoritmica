#include<bits/stdc++.h>

using namespace std;

#define input freopen("input.txt","r",stdin);
// #define output freopen("output.txt","w",stdout);

const int nodos = 10000;

bool vis[nodos]; //arreglo para marcar los nodos visitados
vector<int> grafo[nodos]; //grafo

void DFS(int nodoInicial){
  stack<int> pila;
  pila.push(nodoInicial);
  
  while(!pila.empty()){ //la pila no esta vacia?
    int nodoActual = pila.top(); //obtenemos el primer elemento de la pila
    pila.pop(); //eliminamos el primer elemento de la pila
    // if(vis[nodoActual]) continue; //marcamos el nodo como visitado
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
  input;

  int nodos, aristas;
  cin>>nodos>>aristas;
  for (int i = 0; i < aristas; i++){
    int nodoInicial,nodoFinal;
    cin>>nodoInicial>>nodoFinal;
    grafo[nodoInicial].push_back(nodoFinal);
  }
  //Si el nodo S puede llegar al nodo T
  int S,T;
  cin>>S>>T;
  DFS(S);
  if (vis[T]){ //logre llegar al nodo T?
    cout<<"Si se puede llegar de "<<S<<" a "<<T<<endl;
  }else{
    cout<<"No se puede llegar de "<<S<<" a "<<T<<endl;
  }

  return 0;
}