#include<bits/stdc++.h>

using namespace std;

int main(){

  int r=0;
  int c=1;
  for (int i = 1; i <= 6; i++){
    r += c;
    c++;
  }
  cout<<r<<endl;
  
  return 0;
}