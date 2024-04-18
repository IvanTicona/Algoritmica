Vector
- add
- remove n
- push_back n
- resize
- ()iniciar

Stack
LIFO
- pop 1
- top 1
- push 1
- empty 1

Queue
FIFO
- peek
- pop
- top
- empty
- push
- top

Priority Queue
- Elementos que tienen prioridad y se ponene a la cabeza


Listas enlazadas
- Nodo
  _______________
 | contenido |   |  cabeza
 |   cuerpo  |   |
  ---------------

add() O(n)=n
get(i) O(n)=n
remove(i) O(n)=n

Iteradores
Muestra que esta enlazado con que
- next
- prev
- begin
- end

Espacio en memoria = 2n

Doubly Linked List
// Se puede hacer matricez con listas enlazadas
       ___________________
 cola |   | contenido |   |  cabeza
      |   |   cuerpo  |   |
       -------------------
 
removeLast() O(n)=1
removeFirst() O(n)=1

Grafos
- Cojunto de pares ordenados
- Vertices, aristas
- Dirigidos, no dirigidos

- Pesados, no pesados
- Ciclos, no ciclos
- Conexo, no conexo
- Aciclico, ciclico
- Completo, no completo
- Bipartito, no bipartito
- Regular, no regular
- Simple, no simple

Representacion de grafos

Grafo de matrices
   0,1,2,3,4
0 [0,1,0,0,1]
1 [1,0,1,0,0]
2 [0,1,0,1,1]
3 [0,1,1,0,1]
4 [1,0,0,1,0]
Complejidad O(n)=1

cada fila es un vertice y cada columna es una arista

Grafo de listas
0 -> 1 -> 4
1 -> 0 -> 2
2 -> 1 -> 3 -> 4
3 -> 1 -> 2 -> 4
4 -> 0 -> 3
Complejidad T(n) = 2n, O(n)=n

Matriz cuando datos < 10^6, Listas cuando datos > 10^6


Grafo listas cuando, mas nodos menos aristas,
Grafo matriz cuando, mas aristas menos nodos
