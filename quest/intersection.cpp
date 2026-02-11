#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin>>n;

  vector<int> a(n);
  vector<int> b(n);

  for(auto &e: a){
    cin>>e;
  }

  for(auto &e: b){
    cin>>e;
  }

  int ans = 0;

  unordered_set<int> s;

  for(int i = 0; i<a.size(); i++){
    if(s.find(a[i]) == s.end()){
      ans++;
      s.insert(a[i]);
    }
  }
  for(int i = 0; i<b.size(); i++){
    if(s.find(b[i]) == s.end()){
      ans++;
      s.insert(b[i]);
    }else{
    ans--;
    }
  }

    cout<<ans<<"\n";


}
