#include<bits/stdc++.h>

using namespace std;

int dp[1000];

int fibonnaci(int n){
  if(n==0) return 0;
  if(n==1) return 1;
  if(dp[n]==-1){
    int res=fibonnaci(n-1)+fibonnaci(n-2);
    dp[n]=res;
  };
  return dp[n];
}


int main(){

  memset(dp,-1,sizeof(dp));
  
  int n=60;

  cout<<fibonnaci(n);

  return 0;
}