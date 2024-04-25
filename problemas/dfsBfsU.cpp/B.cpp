#include<bits/stdc++.h>

using namespace std;

bool vis[100][100];
vector<string> grafo(100,"");

int vx[]={1,1,0,-1,-1,-1,0,1};
int vy[]={0,1,1,1,0,-1,-1,-1};

void dfs(int xn, int yn, int n, int m){

  for (int i = 0; i < 8; i++){
    int x = vx[i]+xn;
    int y = vy[i]+yn;

    if (x>=0 && x<n && y>=0 && y<m && !vis[x][y] && grafo[x][y] == '@'){
      vis[x][y] = true;
      dfs(x,y,n,m);
    }
  }
}

int main(){
  int m,n;
  while(cin>>m>>n && m){
    memset(vis,false,sizeof(vis));
    for (int i = 0; i < m; i++){
      grafo[i] = "";
    }
    for (int i = 0; i < m; i++){
      cin>>grafo[i];
    }
    int deposits = 0;
    for (int i = 0; i < m; i++){
      for (int j = 0; j < n; j++){
        if (grafo[i][j] == '@' && !vis[i][j]){
          deposits++;
          vis[i][j] = true;
          dfs(i,j,m,n);
        }
      }
    }
    cout<<deposits<<endl;
  }

  return 0;
}