#include<bits/stdc++.h>

using namespace std;

#define input freopen("input.txt","r",stdin);

vector<int> grafo[30];
bool vis[30];
int niveles[30];
int nodesSize;

void generateGraph(int nc, set<int> &nodes){

  int aristas[1000];
  memset(aristas, 0, sizeof(aristas));
  memset(vis,false,sizeof(vis));
  memset(niveles,0,sizeof(niveles));
  for (int i = 0; i < nc*2; i+=2){
    cin>>aristas[i]>>aristas[i+1];
    nodes.insert(aristas[i]);
    nodes.insert(aristas[i+1]);
  }

  int nodo = 0;
  for (int element: nodes){
    grafo[nodo].push_back(element);
    nodo++;
  }

  for (int i = 0; i < nc*2; i+=2){
    int nodoInicio, nodoFinal;
    nodoInicio = aristas[i];
    nodoFinal = aristas[i+1];
    for (int i = 0; i < nodes.size(); i++){
      if (grafo[i][0] == nodoInicio){
        grafo[i].push_back(nodoFinal);
      }
      if (grafo[i][0] == nodoFinal){
        grafo[i].push_back(nodoInicio);
      }
    }
  }
}

int unreached(int ttl){
  int count=0;
  for (int i = 0; i < nodesSize; i++){
    if(niveles[i]>ttl) count++;
  }
  return count;
}

int getIndex(int searchedNode){
  int index;
  for (int i = 0; i < nodesSize; i++){
    if(grafo[i][0]==searchedNode) index = i;
  }
  return index;
}

void BFS(int nodoInicial){
  queue<int> cola;
  cola.push(nodoInicial);
  niveles[nodoInicial] = 0;

  while(!cola.empty()){

    int nodoActual = cola.front();
    cola.pop();
    if(!vis[nodoActual]){
      vis[nodoActual] = true;
      for (int i = 1; i < grafo[nodoActual].size(); i++){
        int amigo = getIndex(grafo[nodoActual][i]);
        if (!vis[amigo]){
          if(niveles[amigo] == 0) {niveles[amigo] = niveles[nodoActual]+1;}
          cola.push(amigo);
        }
      }
    }
  }
}

int main(){

  input;

  set<int> nodes;
  int nc;
  int caseTest=0;
  // while(cin>>nc && nc){
    generateGraph(nc,nodes);
    nodesSize = nodes.size();
    int nodo,ttl;
    while(cin>>nodo>>ttl && (nodo || ttl)){
      caseTest++;
      int nodoInicial = getIndex(nodo);
      BFS(nodoInicial);
      cout<<"Case "<<caseTest<<": "<<unreached(ttl)<<" nodes not reachable from node "<<nodo<<" with TTL = "<<ttl<<"."<<endl;  
    }
  // }
}