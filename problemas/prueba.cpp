#include<bits/stdc++.h>

using namespace std;

vector<int> days(0);
vector<int> save(0);

void coinsDays() {
  for (int i = 1; i <= 141; ++i) {
    for (int j = 0; j < i; ++j) {
      days.push_back(i);
    }
  }
}

int getTotalCoins(int n) {
  int s=0;
  for (int i = 0; i < n; ++i) {
    s += days[i];
  }
  return s;
}

int main(){

  int nblocks,line,limit;
  coinsDays();
  cin>>nblocks;
  while(nblocks--){
    limit=21;
    while(limit-- && cin>>line && line!=0){
      save.push_back(line);
    }
  }
  for (int i = 0; i < save.size(); ++i) {
    cout<<save[i]<<" "<<getTotalCoins(save[i])<<"\n";
  }

  return 0;
}