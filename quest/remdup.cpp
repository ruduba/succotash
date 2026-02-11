#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin>>n;

  vector<int> ar(n);

  for(auto &e: ar){
    cin>>e;
  }

  vector<int> ans;
  unordered_set<int> s;

  for(int i = 0; i<n; i++){
    if(s.find(ar[i]) == s.end()){
      ans.push_back(ar[i]);
      s.insert(ar[i]);
    }

  }

  for(auto x: ans){
    cout<<x<<" ";
  }
  cout<<"\n";


}
