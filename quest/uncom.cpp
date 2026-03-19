#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, m;
    cin>>n>>m;
    
    vector<int> a(n);
    vector<int> b(m);
    
    for(auto &e: a){
        cin>>e;
    }
    
    for(auto &e: b){
        cin>>e;
    }
        
    unordered_set<int> s(a.begin(), a.end());
    unordered_set<int> t(b.begin(), b.end());
    
    int cnt = 0;
    
    for(auto x: s){
      if(t.find(x) == t.end()) cnt++;
    }
    
    for(auto x: t){
      if(s.find(x) == s.end()) cnt++;
    }
    
    cout<<"\n"<<cnt;
    
    
}