#include<bits/stdc++.h>

using namespace std;

int main(){

  priority_queue<int> pq;
  int arr[] = {0,90,19,36,17,3,25,1,2,7};

  for(int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++){
    pq.push(arr[i]);
    cout<<(i>>1)<<endl;
  }
  

  // while(!pq.empty()){
  //   cout << pq.top() << " ";
  //   pq.pop();
  // }


  return 0;
}