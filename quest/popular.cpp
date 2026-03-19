
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin>>n>>m>>k;
    
    vector<vector<int>> c(n, vector<int>(m));
    
    for(int i = 0; i<n; i++){
      for(int j = 0; j<m; j++){
        cin>>c[i][j];
      }
    }

    unordered_map<int, int> mp;
    
    for(int i = 0; i<n; i++){
      unordered_set<int> s;
        for(int j = 0; j<m; j++){
              s.insert(c[i][j]);
        }
        for(auto x: s){
          mp[x]++;
        }
    }
    
    vector<int> ans;
    
    for(auto x: mp){
        if(x.second >= k){
            ans.push_back(x.first);
        }
    }
    
    sort(ans.begin(), ans.end());
    
    for(auto x: ans){
      cout<<x<<" ";
    }
    
}