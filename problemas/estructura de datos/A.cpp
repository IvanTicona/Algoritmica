#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  while(cin>>n&&n){
    vector<int> c(n,0);
    bool isValid=true;
    for (int i = 0; i < n; i++){
      int car,currentPos;
      cin>>car>>currentPos;

      if(i+currentPos<0||i+currentPos>=n) {isValid=false; continue;};

      if(!c[i+currentPos]) c[i+currentPos]=car;
      else {isValid=false; continue;};
    }
    if (isValid) {
      cout<<c[0];
      for (int i = 1; i < c.size(); i++){
        cout<<" "<<c[i];
      }
    }
    else cout<<"-1";
  }

  return 0;
}