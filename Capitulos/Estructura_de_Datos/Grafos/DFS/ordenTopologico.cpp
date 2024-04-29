#include<bits/stdc++.h>

using namespace std;


vector<int> grafo[1000];


vector<int> dfs(int nroNodos){
  vector<int> grados(nroNodos,0);
  vector<int> topologicalOrder;

  for (int i = 0; i < nroNodos; i++){
    for (int j = 0; j < grafo[i].size(); j++){
      grados[grafo[i][j]]++;
    }
  }

  stack<int> pila;
  for (int i = 0; i < nroNodos; i++){
    if(grados[i]==0){
      pila.push(i);
    }
  }

  while (!pila.empty()){

    int nodoActual = pila.top();
    pila.pop();
    topologicalOrder.push_back(nodoActual);

    for (int i = 0; i < grafo[nodoActual].size(); i++){
      int vecino = grafo[nodoActual][i];
      grados[vecino]--;
      if(grados[vecino]==0){
        pila.push(vecino);
      }
    }
  }
  return topologicalOrder;
}

int main(){

  vector<int> result;
  int nroNodos = 6;
  result = dfs(nroNodos);

  for (int i = 0; i < result.size(); i++){
    cout<<result[i]<<" ";
  }

  return 0;
}