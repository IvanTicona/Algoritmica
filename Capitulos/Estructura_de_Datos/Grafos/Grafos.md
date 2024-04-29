## Representacion de grafos

- Lista de listas
- Matriz

## Tipo de grafo

- Dirigido
- No dirigido

En una matriz un grafo no dirigido es SIMETRICO  
Basta que una arista sea dirigida, para que el grafo sea dirigido  

## Peso de un grafo

No confundir con capacidad   

El peso por defecto de una arista es de 1  
El peso es el valor de la casilla en la representacion matriz  

## Arboles

Un grafo que solo tiene 2 bifurcaciones es Arbol Binario  
Los nodos al final de cada bifuracion se llaman nodos hoja  
Un nodo hijo siempre tiene hijos, sino es nodo hoja  

No tiene ciclos  
Ciclo: Conjunto de aristas que parten de un NODO A y llegan al mismo NODO  

Siempre es dirigido  

## Recorrido de grafos

- DFS: Recorrido en profundidad  
Pila   
El recorrido depende de como se guarda en la lista  
Pila estatica o pila de la rama(recursividad)  

Stack= Estatica stack, Memoria recursividad  

```
void DFS(int nodoInicial){
  stack<int> pila;
  pila.push(nodoInicial);
  while(!pila.empty()){
    int currentNode = pila.top();
    pila.pop();
    vis[currentNode] = true;
    for(int i=0; i<grafo[currentNode].size(); i++){
      int vecino = grafo[currentNode][i];
      if(!vis[vecino]){
        pila.push(vecino);
      }
    }
  }
}
```
Ventajas:
- Facil de implementar
- Menos memoria

- BFS: Recorrido en anchura
Cola  

```
void BFS(int nodoInicial){
  queue<int> cola;
  cola.push(nodoInicial);
  while(!cola.empty()){
    int currentNode = cola.front();
    cola.pop();
    vis[currentNode] = true;
    for(int i=0; i<grafo[currentNode].size(); i++){
      int vecino = grafo[currentNode][i];
      if(!vis[vecino]){
        cola.push(vecino);
      }
    }
  }
}
```

Cual es el camino mas corto entre dos nodos?  