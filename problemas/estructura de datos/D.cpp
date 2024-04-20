#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  while(cin >> n && n != 0){
    vector<string> cards(n);
    vector<string> words(n);
    vector<string> c(n);
    for (int i = 0; i < n; i++){
      cin>>cards[i]>>words[i];
    }
    for (int i = 0, currentPos = -1; i < n; i++){
      int steps = words[i].size();
      while (steps){
        currentPos++;
        if(currentPos == n) currentPos=0;
        if(c[currentPos] == ""){
          steps--;
          if(steps == 0) c[currentPos]=cards[i];
        }
      } 
    }
    cout<<c[0];
    for (int i = 1; i < n; i++){
      cout<<" "<<c[i];
    }
  }
  return 0;
}