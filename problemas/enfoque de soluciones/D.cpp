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

// Accepted
// #include<bits/stdc++.h>

// using namespace std; 
 
// int cycleLength(int n) { 
//   int length = 1; 
//   while (n != 1) { 
//     if (n % 2 == 0) { 
//       n = n / 2; 
//     }else { 
//       n = 3 * n + 1; 
//     } 
//     length++; 
//   }  
//   return length; 
// } 
 
// int cycleLength(int i, int j) { 
//   int maxPrev = 0;
//   for(int num = min(i,j); num <= max(i,j); num++) {
//     int maxNew = cycleLength(num);
//     maxPrev = max(maxPrev, maxNew);
//   }
//   return maxPrev; 
// } 
 
// int main() { 
//   int i, j; 
//   while (cin >> i >> j) { 
//     cout << i << " " << j << " " << cycleLength(i, j) << endl; 
//   } 
//   return 0; 
// }