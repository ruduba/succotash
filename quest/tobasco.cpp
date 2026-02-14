#include<bits/stdc++.h>
using namespace std;

vector<int> tobasco(int n, int k, vector<int> &list){
  vector<int> ans;

  int l = 0, r = k-1;
  bool present;

  while(r<n){
    present  = false;
    for(int i = l; i<=r; i++){
        if(list[i]<0){
          ans.push_back(list[i]);
          present = true;
          break;
        }
    }
    if(!present){
      ans.push_back(0);
    }
    l++;
    r++;
  }
  return ans;
}



int main(){
  int n, k;
  cin>>n>>k;

  vector<int> ar(n);
  for(auto &e: ar){
    cin>>e;
  }

  vector<int> ans = tobasco(n, k, ar);

  for(auto x: ans){
    cout<<x<<" ";
  }


return 0;
}
