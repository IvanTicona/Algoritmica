#include<bits/stdc++.h>

#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int w[4] = { 1, 3, 3, 10};
int g[4] = { 1000, 1500, 500, 3000};
int n = 4;

//top down
// int knapSackTD(int remWeight, int i) {
//     if (i == n) return 0;
//     if (dp[remWeight][i] != -1) return dp[remWeight][i];

//     if (w[i] <= remWeight) {
//         return dp[remWeight][i] = max(g[i] + knapSackTD(remWeight - w[i], i + 1), knapSackTD(remWeight, i + 1));
//     } else {
//         return dp[remWeight][i] = knapSackTD(remWeight, i + 1);
//     }
// }

void bu() {
    int dp2[1000][1000];
    memset(dp2, 0, sizeof(dp2));

    for(int i = 1; i <= n; i++) { // objetos 
        for(int j = 15; j >= 1; j--) { // peso de la mochila
            // cout<<i <<" "<< j<<endl;
            if( w[i-1] <= j ) {
                dp2[i][j] = max(g[i-1]+ dp2[i-1][j-w[i-1]], dp2[i-1][j]);
            } else {
                dp2[i][j] = dp2[i-1][j];
            }
            
        } 
    }
}


int main (){
    // memset(dp, -1, sizeof(dp));
    // cout<<f(0,15)<<endl;
    bu();
}