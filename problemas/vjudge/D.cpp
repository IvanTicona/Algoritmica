#include<bits/stdc++.h>

using namespace std;

int collatz(int n) {
  int ops = 1;
  while(n != 1) {
    if(n % 2 == 0){  
      n = n / 2;
    } else { 
      n = n * 3 + 1;
    }
    ops++;
  }
  return ops;
}

int main () {

  int a, b;
  while(cin>>a>>b) {
    int mayorPrev = 0;
    // if(a>b) {
    //   int temp = a;
    //   a = b;
    //   b = temp;
    // }
    for (int i = a; i <= b; i++) {
      int mayorNew = collatz(i);
      mayorPrev = max(mayorNew, mayorPrev);
    }
    cout<<a<<" "<<b<<" "<<mayorPrev<<endl;
  }

  return 0;
}