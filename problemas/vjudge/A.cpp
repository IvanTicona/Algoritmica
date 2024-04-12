#include<bits/stdc++.h>

using namespace std;

double redondear(double num, int n) {
    double m = pow(10.0, n);
    return round(num * m) / m;
}

string formateado(double nume) {
  double num = redondear(nume,2);
  string f = to_string(num);
  int p = f.find('.');
  f = f.substr(0, p + 3);
  for (int i = p - 3; i > 0; i -= 3) {
    f.insert(i, ",");
  }
  return f;
}

int main(){

  double n,t;
  int e,m,d=0;
  cin>>e;

  while(e--){
    m=12;
    t=0.0;
    while (m--){
      cin>>n;
      t+=n;
    }
    cout<<++d<<" "<<"$"<<formateado(t/12.0)<<endl;
  }
  
  return 0;
}