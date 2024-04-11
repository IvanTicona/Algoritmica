#include<bits/stdc++.h>

using namespace std;

int main(){
  
  int n, speed, currentTime, elapsedTime;
  int miles=0;
  int startTime=0;
  
  // while (cin>>n && n != -1)
  // {
    cin>>n;
    for (int i = 0; i < n; i++)
    {
      cin>>speed>>elapsedTime;
      currentTime = elapsedTime - startTime;
      miles += (currentTime * speed);
      startTime = elapsedTime;
    }
    cout<<miles<<" miles";
  // }

  return 0;
}