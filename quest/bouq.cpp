
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> c(n);
    
    for(auto &e: c){
      cin>>e;
    }
    
    int k;
    cin>>k;
    sort(c.begin(), c.end());
    sort(c.begin()+ k, c.end());
    
    for(auto x: c){
      cout<<x<<" ";
    }
    
    
}