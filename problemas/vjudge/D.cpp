#include<bits/stdc++.h>

using namespace std;

int collatz(int n) {
   int  result = 1;
    while(n != 1) {
      if(n % 2 == 0){  
        n = n / 2;
      } else { 
        n = n * 3 + 1;
       }
       result++;
    }
    return result;
}

int main () {
    int a, b;
    while(cin>>a>>b) {
        int mayor = -1;
        if(a>b) {
         int temp = a;
         a = b;
         b = temp;
        }
        for (int i = a; i <= b; i++) {
            int r = collatz(i);
            mayor = max(r, mayor);
        }
        cout<<a<<" "<<b<<" "<<mayor<<endl;
    }

    return 0;
}