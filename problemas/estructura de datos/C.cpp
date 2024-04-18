#include<bits/stdc++.h>

using namespace std;

int main(){

  int n;
  while(cin>>n){
    vector<int> v(n);
    vector<int> diff(n-1);
    //lleno el vector con las entradas
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    //lleno el vector de diferencias
    for(int i=0;i<n-1;i++){
      diff[i]=abs(v[i]-v[i+1]);
    }
    //ordeno el vector de diferencias
    sort(diff.begin(),diff.end());
    //supongo que es jolly
    bool jolly=true;
    for(int i=0;i<n-1;i++){
      //si alguna diferencia no es i+1, no es jolly
      if(diff[i]!=i+1){
        jolly=false;
        //salgo del ciclo
        break;
      }
    }
    jolly?cout<<"Jolly"<<endl:cout<<"Not jolly"<<endl;
  }
  return 0;
}