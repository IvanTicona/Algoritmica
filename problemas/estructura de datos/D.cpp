#include<bits/stdc++.h>

using namespace std;

int main(){

  int n;
  cin>>n;
  vector<string> cards(n);
  vector<string> words(n);
  string order[n];
  for (int i = 0; i < cards.size(); i++){
    cin>>cards[i];
    cin>>words[i];
  }
  for (int i = 0,j=0; i < n; i++,j++){
    order[words[j].size()-1]=cards[i];
    if(i==n-1) i=0;
  }
  for (int i = 0; i < n; i++){
    cout<<order[i]<<" ";
  }
  return 0;
}