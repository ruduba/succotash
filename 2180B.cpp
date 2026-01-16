#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<string> s(n);
        
        for(auto &e: s){
            cin>>e;
        }
        
        string ans = s[0];
        
        for(int i = 1; i<n; i++){
            ans  = min(s[i]+ans, ans+s[i]);
        }
        cout<<ans<<"\n";
    }
    return 0;
    }
