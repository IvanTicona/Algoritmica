#include <bits/stdc++.h>

using namespace std;

vector<string> petri(1000);
bool vis[1000][1000];

int vx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int vy[] = {0, 0, 1, -1, 1, -1, 1, -1};

void dfs(int xn, int yn, int row, int col){
  vis[xn][yn] = true;
  for (int i = 0; i < 8; i++){
    int x = xn + vx[i];
    int y = yn + vy[i];
    if (x>=0 && x<row && y>=0 && y<col && petri[x][y]=='#'){
      if(!vis[x][y]){
        dfs(x, y, row, col);
      }
    }
  }
}


int main(){
  int m, n;
  cin>>m>>n;
  for (int i = 0; i < m; i++){
    cin>>petri[i];
  }
  int loops = 0;
  for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++){
      if (!vis[i][j] && petri[i][j] == '#'){
        dfs(i,j,m,n);
        loops++;
      }
    }
  }
  cout<<loops<<endl;
}