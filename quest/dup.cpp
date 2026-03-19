#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    vector<int> a(n);
    
    for(auto &e: a){
      cin>>e;
    }
    
    vector<int> ans;
    
    unordered_set<int> s;
    
    for(auto x: a){
      if(s.find(x) == s.end()){
        s.insert(x);
        ans.push_back(x);
      }  
    }
    
    for(auto x: ans){
      cout<<x<<" ";
    }
    
    
}