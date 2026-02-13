#include<bits/stdc++.h>
using namespace std;

vector<int> rr(int n, int qt, vector<int> &bt){
  vector<int> wt(n);
  vector<int> r_bt(n);

  for(int i = 0; i<n; i++){
    r_bt[i] = bt[i];
  }
  int t = 0;

  while(1){
    bool done = true;

    for(int i = 0; i<n; i++){


      if(r_bt[i]>0){
        done  = false;
        if(r_bt[i]>qt){
            t+=qt;
            r_bt[i] -= qt;

        }else{
          t = t+r_bt[i];
          wt[i] = t - bt[i];
          r_bt[i] = 0;
        }

      }

    }
    if(done == true){
        break;
      }
  }
  return wt;
}



int main(){

int n;
cin>>n;
int qt;
cin>>qt;
vector<int> bt(n);
for(auto &e: bt){
  cin>>e;
}

vector<int> u = rr(n, qt, bt);
int s = 0;

for(auto x: u){
  s+=x;
}

cout<<(double)s/n;

return 0;
}
