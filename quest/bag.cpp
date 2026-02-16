#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n, k;
    cin>>n>>k;
    vector<int> ar(n);
    unordered_map<int, int> freq;

    for(auto &e: ar){
      cin>>e;
      freq[e]++;
    }
    int cnt = 0;

    if(k==0){
      for(auto &x: freq){
        cnt+= x.second * (x.second-1)/2;
      }
    }else{
      for(auto &e: freq){
        int val = e.first;
        if(freq.count(val+k)){
          cnt += e.second * freq[val+k];
        }
      }
    }

    cout<<cnt<<"\n";
  }


return 0;
}
