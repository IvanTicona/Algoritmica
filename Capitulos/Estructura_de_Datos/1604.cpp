#include<bits/stdc++.h>

using namespace std;

int main(){

  //Arrays
  int arr[10];
  memset(arr,0,10); //Llenar el array
  for (int i = 0; i < 10; i++){
    arr[i]=0;
  }
  //lectura O(n) = 1
  //escritura O(n) = 1
  //acceso O(n) = 1

  //Vector
  vector<int> vec(10);
  for (int i = 0; i < 10; i++){
    vec[i]=0;
  }

  //Stack
  stack<int> pila;
  pila.push(1);
  cout<<pila.top()<<endl;


  return 0;
}