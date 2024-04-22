#include <bits/stdc++.h>

using namespace std;

int main(){

  int s, b;
  while (cin>>s>>b){
    if (!s&&!b) break;
    vector<int> line(s);
    for (int i = 0; i < s; i++){line[i] = i+1;}
    while(b--){
      int l,r;
      cin>>l>>r;
      int lindex = find(line.begin(),line.end(),l) - line.begin();
      int rindex = find(line.begin(),line.end(),r) - line.begin();
      string prevNum = lindex == 0 ? "*" : to_string(line[lindex-1]);
      string nextNum = rindex == line.size()-1 ? "*" : to_string(line[rindex+1]);
      for (int i = lindex; i <= rindex; i++){
        line.erase(line.begin()+lindex);
      }
      cout<<prevNum<<" "<<nextNum<<endl;
    }
    cout<<"-"<<endl;
  }
  return 0;
}