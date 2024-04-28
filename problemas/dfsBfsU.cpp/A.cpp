#include <bits/stdc++.h>

using namespace std;

vector<int> grafoCordenadas[1000];
bool vis[1000];

void bfs(int nodoInicial, int tamaniografo){
  memset(vis, 0, sizeof(vis));
  queue<int> cola;
  cola.push(nodoInicial);
  while (!cola.empty()){
    int nodoActual = cola.front();
    cola.pop();
    if (!vis[nodoActual]){
      vis[nodoActual] = true;

      for (int i = 0; i < grafoCordenadas[nodoActual].size(); i++){
        int amigo = grafoCordenadas[nodoActual][i];
        if (!vis[amigo]){
          cola.push(amigo);
        }
      }
    }
  }
}

int main(){

  int numCordenadas;
  while (cin >> numCordenadas && numCordenadas){

    int cordenadasX[numCordenadas], cordenadasY[numCordenadas];
    memset(cordenadasX, 0, sizeof(cordenadasX));
    memset(cordenadasY, 0, sizeof(cordenadasY));
    for (int i = 0; i < numCordenadas; i++){
      cin >> cordenadasX[i] >> cordenadasY[i];
    }
    for (int i = 0; i < numCordenadas; i++){
      double distancias[numCordenadas];
      memset(distancias, 0, sizeof(distancias));
      int cordenadaMenor1 = 0;
      int cordenadaMenor2 = 0;
      int posX = cordenadasX[i], posY = cordenadasY[i];
      int tamAmigo1 = 80, tamAmigo2 = 80;
      for (int j = 0; j < numCordenadas; j++){
        int pos2X = cordenadasX[j], pos2Y = cordenadasY[j];
        if (!(pos2X == posX && pos2Y == posY)){
          double distancia = sqrt((((posX - pos2X)*(posX - pos2X)) + ((posY - pos2Y)*(posY - pos2Y))));
          distancias[j] = distancia;
          if (distancias[j] < tamAmigo1){
            tamAmigo2 = tamAmigo1;
            cordenadaMenor2 = cordenadaMenor1;
            tamAmigo1 = distancias[j];
            cordenadaMenor1 = j;
          }else if (distancias[j] == tamAmigo1){
            if (cordenadasX[j] < cordenadasX[cordenadaMenor1]){
              tamAmigo2 = tamAmigo1;
              cordenadaMenor2 = cordenadaMenor1;
              tamAmigo1 = distancias[j];
              cordenadaMenor1 = j;
            }else if (cordenadasY[j] < cordenadasY[cordenadaMenor1]){
              tamAmigo2 = tamAmigo1;
              cordenadaMenor2 = cordenadaMenor1;
              tamAmigo1 = distancias[j];
              cordenadaMenor1 = j;
            }else{
              tamAmigo2 = distancias[j];
              cordenadaMenor2 = j;
            }
          }else if (distancias[j] < tamAmigo2){
            tamAmigo2 = distancias[j];
            cordenadaMenor2 = j;
          }else if (distancias[j] == tamAmigo2){
            if (cordenadasX[j] < cordenadasX[cordenadaMenor2]){
              tamAmigo2 = distancias[j];
              cordenadaMenor2 = j;
            }else if (cordenadasY[j] < cordenadasY[cordenadaMenor2]){
              tamAmigo2 = distancias[j];
              cordenadaMenor2 = j;
            }
          }
        }
      }
      grafoCordenadas[i].push_back(cordenadaMenor1);
      grafoCordenadas[i].push_back(cordenadaMenor2);
    }

    bfs(0, numCordenadas);
    bool isReached = true;
    for (int i = 0; i < numCordenadas; i++){
      if (!vis[i]){
        isReached = false;
        break;
      }
    }

    if (isReached){
      cout<<"All stations are reachable.";
    }else{
      cout<<"There are stations that are unreachable.";
    }

    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < 1000; ++i){
      grafoCordenadas[i].clear();
    }
  }

  return 0;
}