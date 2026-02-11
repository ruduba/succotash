#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
return a > b;
}

int main(){
  int n, k;
  cin>>n>>k;

  vector<int> ar(n);

  for(auto &e: ar){
    cin>>e;
  }

  sort(ar.begin(), ar.begin()+k);
  sort(ar.begin()+k, ar.end(), cmp);

  for(auto x: ar){
    cout<<x<<" ";
  }



return 0;
}
