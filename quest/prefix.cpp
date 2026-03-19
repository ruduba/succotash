#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    if(n==0) return 0;
    
    vector<string> names(n);
    
    for(auto &e: names){
        cin>>e;
    }
    
    sort(names.begin(), names.end());
    
    string first = names[0], last = names[n-1], ans;
    
    for(int i = 0; i<min(first.size(), last.size()); i++){
        if(first[i] != last[i]) break;
        ans += first[i];
    }
    cout<<ans;
}