#include<bits/stdc++.h>

using namespace std;

int main() {
    int nCar;
    while(cin>>nCar && nCar) {
      vector<int> p(nCar,0);
        bool noSolution = false;
        for(int i = 0; i < nCar; i++){
          int car, finalPos;
          cin>>car>>finalPos;

          if(i+finalPos >= nCar || i+finalPos < 0){
              noSolution = true;
              continue;
          }

          if(p[i+finalPos] != 0){
              noSolution = true;
              continue;
          }

          p[i+finalPos] = car;
            
        }
        if(noSolution){
            cout<<-1<<endl;
        }else {
          cout<<p[0];
          for(int i=1; i< nCar; i++){
              cout<<" "<<p[i];
          }
          cout<<endl;
        }
 
    }
       
    return 0; 
}