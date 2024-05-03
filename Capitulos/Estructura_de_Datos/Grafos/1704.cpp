#include<bits/stdc++.h>

using namespace std;

void representacionMatriz(){int tamanio;
  cin>>tamanio;
  int grafo[tamanio][tamanio];
  memset(grafo,0,sizeof(grafo));
  int aristas;
  cin>>aristas;
  for (int i = 0; i < aristas; i++){
    int nodo1,nodo2;
    cin>>nodo1>>nodo2;
    grafo[nodo1][nodo2]=1;
  }
  for (int i = 0; i < tamanio; i++){
    cout<<"[ ";
    for (int j = 0; j < tamanio; j++){
      cout<<grafo[i][j]<<" ";
    }
    cout<<"]";
    cout<<endl;
  }
}

void representacionLista(){
  //Array de vectores
  vector<int> grafo[10];
  int tamanio;
  cin>>tamanio;
  int aristas;
  cin>>aristas;
  for (int i = 0; i < aristas; i++){
    int nodo1,nodo2;
    cin>>nodo1>>nodo2;
    grafo[nodo1].push_back(nodo2);
  }
  for (int i = 0; i < tamanio; i++){
    cout<<"[ ";
    for (int j = 0; j < grafo[i].size(); j++){
      cout<<grafo[i][j]<<" ";
    }
    cout<<"]";
    cout<<endl;
  }
}

int main(){

  // representacionMatriz();
  representacionLista();
  
  return 0;
}