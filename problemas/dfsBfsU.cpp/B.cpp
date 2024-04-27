#include<bits/stdc++.h>

using namespace std;

bool vis[100][100];
vector<string> grafo(100,"");

int vx[]={1,1,0,-1,-1,-1,0,1};
int vy[]={0,1,1,1,0,-1,-1,-1};

void dfs(int xn, int yn, int row, int col){

  for (int i = 0; i < 8; i++){
    int x = vx[i]+xn;
    int y = vy[i]+yn;

    if (x>=0 && x<row && y>=0 && y<col && !vis[x][y] && grafo[x][y] == '@'){
      vis[x][y] = true;
      dfs(x,y,row,col);
    }
  }
}

int main(){
  int row,col;
  while(cin>>row>>col && row){
    memset(vis,false,sizeof(vis));
    for (int i = 0; i < row; i++){
      grafo[i] = "";
    }
    for (int i = 0; i < row; i++){
      cin>>grafo[i];
    }
    int deposits = 0;
    for (int i = 0; i < row; i++){
      for (int j = 0; j < col; j++){
        if (grafo[i][j] == '@' && !vis[i][j]){
          deposits++;
          vis[i][j] = true;
          dfs(i,j,row,col);
        }
      }
    }
    cout<<deposits<<endl;
  }

  return 0;
}