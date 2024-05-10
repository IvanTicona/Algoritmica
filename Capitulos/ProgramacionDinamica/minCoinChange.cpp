#include <bits/stdc++.h>

using namespace std;

// int minCoins(int coins[], int cantCoins, int monto){

//   if (monto == 0)
//     return 0;

//   // Initialize result
//   int res = INT_MAX;

//   for (int i = 0; i < cantCoins; i++){
//     if (coins[i] <= monto){
//       int sub_res = minCoins(coins, cantCoins, monto - coins[i]);
//       // Check for INT_MAX to avoid overflow and see if
//       if (sub_res != INT_MAX && sub_res + 1 < res)
//         res = sub_res + 1;
//     }
//   }
//   return res;
// }

int minCoins(int coins[], int cantCoins, int monto){
  int dp[monto+1];
  dp[0] = 0;

  // for(int i=1; i<=monto; i++)
  //   dp[i] = INT_MAX;

  for(int i=1; i<=monto; i++){
    for(int j=0; j<cantCoins; j++)
      if(coins[j] <= i){
        int sub_res = dp[i-coins[j]];
        if(sub_res + 1 < dp[i])
        // if(sub_res != INT_MAX && sub_res + 1 < dp[i])
          dp[i] = sub_res + 1;
      }
  }
  return dp[monto];
}


int main(){

  int coins[] = {9, 6, 5, 1};
  int cantCoins = sizeof(coins) / sizeof(coins[0]);
  int monto = 11;
  
  cout<<"Minimum coins required is: "<< minCoins(coins, cantCoins, monto);
  
  return 0;
}
