#include<bits/stdc++.h>

using namespace std;

vector<int> days(0);
vector<int> savedDays(0);

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
      savedDays.push_back(line);   
    }
    savedDays.push_back(0);
  }
  savedDays.pop_back();
  for (int i = 0; i < savedDays.size(); ++i) {
    if(savedDays[i] == 0){
      cout<<endl;
    } else{
      cout<<savedDays[i]<<" "<<getTotalCoins(savedDays[i])<<endl;
    }
  }

  return 0;
}