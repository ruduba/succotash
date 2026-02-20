#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        
        string ans;
        
        for(int i = 0; i<s.size()-2; i++){
            ans += s[i];
        }
        
        ans+="i";
        
        
        cout<<ans<<"\n";
        
        
        
    }
    
    
    
    
    
    
}