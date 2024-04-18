#include<bits/stdc++.h>

using namespace std;

int main(){
  int stations,s;
  cin>>stations>>s;
  vector<int> go(stations);
  vector<int> back(stations);
  for (int i = 0; i < stations; i++){
    cin>>go[i];
  }
  for (int i = 0; i < stations; i++){
    cin>>back[i];
  }
  if(!go[0]) {cout<<"NO"; return 0;}
  if(go[s-1]) {cout<<"YES"; return 0;}
  if(back[s-1]){
    for (int i = s-1; i < stations; i++){
      if(go[i]&&back[i]){cout<<"YES"; return 0;}
    }
  }
  cout<<"NO";

  return 0;
}