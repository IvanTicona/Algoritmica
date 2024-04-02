
## Capitulo 2: Analisis de complejidad

Eficiente = *Tiempo* y Memoria

El tiempo no se mide en seg sino en "unidades de tiempo"

Unidad de tiempo = T(n)

Algoritmo
input = mejor caso, caso medio, peor caso   <- T(n) distinto para cada uno

peor caso = O(n)

n=cant-num

1,2,3,4,5  <- O(n) = n
1,3,2,4,5  <- O(n) = n+1
peor caso  <- O(n) = n^2

Asignaciones
  int test=1;   (1)

Operaciones
  a+2 (1)
  a/2 (1)
  a++ (2)
  a-- (2)
  pow(2,3) (2)

Condicionales
  if(a>b){    <- if (1)  a>b (1)
    a++; (2)
    b--; (2)
  }     <- total (6)

  if(a>b){    <- if (1)  a>b (1)
    a++; (2)     <- total (4)
  } else{
    a++; (2)
    b--; (2)     <- total (6) *PEOR CASO*  if+max(if,else)
  }

Ciclos
  for(i=a;1<n;i++){   (4*n)*x
    sentece1;
    ...
    sentecen;   <- x = cant-sentences
  }

  for(i=a;1<n;i++){   4*n*4n
    for(i=a;1<n;i++){   (4*n)+1
    a=2;  (1)
    }
  }     <- (16n^2)

Lectura y escritura (1)


T(n) = 14
O(n) = 1 👀

