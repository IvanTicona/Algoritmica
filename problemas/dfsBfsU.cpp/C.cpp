#include<bits/stdc++.h>

using namespace std;

bool vis[101][101];
vector<string> grafo(101,"");

int vx[]={1,1,0,-1,-1,-1,0,1};
int vy[]={0,1,1,1,0,-1,-1,-1};

void dfs(int xn, int yn, int n, int m, int &pixels){

  for (int i = 0; i < 8; i++){
    int x = vx[i]+xn;
    int y = vy[i]+yn;

    if (x>=0 && x<n && y>=0 && y<m && !vis[x][y] && grafo[x][y] == '*'){
      vis[x][y] = true;
      pixels++;
      dfs(x,y,n,m,pixels);
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
    int stars=0;
    for (int i = 0; i < m; i++){
      for (int j = 0; j < n; j++){

        if (grafo[i][j] == '*' && !vis[i][j]){
          vis[i][j] = true;
          int pixels = 1;
          dfs(i,j,m,n,pixels);
          if(pixels==1) stars++;
        }

      }
    }
    cout<<stars<<endl;
  }

  return 0;
}