#include<bits/stdc++.h>
using namespace std;

vector<int> tobasco(int n, int k, vector<int> &list){

vector<int> ans;
deque<int> dq;

int l = 0, r = k-1;

for(int i = 0; i<k; i++){
  if(list[i]<0){
    dq.push_back(i);
  }
}

if(!dq.empty()) ans.push_back(list[dq.front()]);
else ans.push_back(0);

for(int i = k; i<n; i++){
  if(!dq.empty() && dq.front() <= i-k){
    dq.pop_front();
  }
  if(list[i]<0){
    dq.push_back(i);
  }

  if(!dq.empty()) ans.push_back(list[dq.front()]);
  else ans.push_back(0);
}



return ans;
}


int main(){
  int t;
  cin>>t;

  while(t--){

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

  cout<<"\n";

  }
return 0;
}
