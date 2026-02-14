#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){

return a>b;
}

vector<int> bouquet(int n, int k, vector<int> &cut){

  sort(cut.begin(), cut.begin()+k);
  sort(cut.begin()+k, cut.end(), cmp);

  return cut;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n, k;
    cin>>n>>k;

    vector<int> a(n);
    for(auto &e: a){
      cin>>e;
    }

    vector<int> ans = bouquet(n, k, a);

    for(auto x: ans){
      cout<<x<<" ";
    }
    cout<<"\n";
  }


return 0;
}
