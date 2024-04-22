#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  while(cin >> n && n){
    vector<string> cards(n);
    vector<string> words(n);
    vector<string> o(n,"empty");
    for (int i = 0; i < n; i++){
      cin>>cards[i]>>words[i];
    }
    for (int i = 0, currentPos = 0; i < n; i++){
      int steps = words[i].size();
      while (steps){
        if(currentPos == n){
          currentPos=0;
        }
        if(o[currentPos] == "empty"){
          steps--;
          if(steps == 0){
            o[currentPos]=cards[i];
          }
        }
        currentPos++;
      }
    }
    for (int i = 0; i < n-1; i++){
      cout<<o[i]<<" ";
    }
    cout<<o[n-1]<<endl;
  }
  return 0;
}