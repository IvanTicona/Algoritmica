#include<bits/stdc++.h>
using namespace std;

bool compararEnteros(int a, int b) {
  return a < b;
}

int main(){

  vector<int> numeros = {5,3,2,4,1};
  bool estaOrdenado = is_sorted(numeros.begin(), numeros.end(), compararEnteros);
  if (estaOrdenado) {
    cout << "✅ORDENADO\n";
  } else {
    cout << "❌DESORDENADO\n";
  }

  return 0;
}