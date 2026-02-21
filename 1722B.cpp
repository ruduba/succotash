#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        string s, r;
        cin>>n>>s>>r;
        
        string ans;
        
        for(int i = 0; i<n; i++){
            if(s[i] == 'G' || s[i] == 'B') s[i] = 'x';
            if(r[i] == 'G' || r[i] == 'B') r[i] = 'x';
        }
        
        if(s==r){
            ans = "YES";
        }else{
            ans = "NO";
        }
        
        
        cout<<ans<<"\n";
        
        
        
    }
    
    
    
    
    return 0;
    
}