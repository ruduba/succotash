#include<bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){
      int n;
    cin>>n;

    vector<int> ar(n);
    vector<int> ans;

    for(auto &e: ar){
      cin>>e;
    }

    sort(ar.begin(), ar.end());

    int l = 0, r = n-1;

    while(l<r){
      ans.push_back(ar[r]);
      ans.push_back(ar[l]);
      l++;
      r--;
    }

    if(l==r){
      ans.push_back(ar[l]);
    }

    for(auto x: ans){
    cout<<x<<" ";
  }

  }

return 0;
}
