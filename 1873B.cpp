#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<int> a(n);
        for(auto &e: a){
            cin>>e;
        }
        
        sort(a.begin(), a.end());
        
        a[0]+=1;
        
        int ans = 1;
        
        for(auto x: a) ans*=x;
        
        cout<<ans<<"\n";
    }
    
    
}