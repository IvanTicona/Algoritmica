#include<bits/stdc++.h>

using namespace std;

bool isPrimeFB(int n){
  int numeroDivisores = 0;
  for (int i = 0; i < n; i++)
  {
    if (n%i == 0)
    {
      numeroDivisores++;
    }
    
  }
  if (numeroDivisores == 2)
  {
    return true;
  } else{
    return false;
  }
}

bool isPrimeMejorado(int n){
  if (n==2){
    return true;
  }
  if(n%2==0 || n<=1){
    return false;
  }
  for (int i = 3; i*i < n; i+=2){
    if (n%i==0){
      return false;
    }
    
  }
  
}

int main(){



  return 0;
}