#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    ll t;
    cin>>t;
    
    while(t--){
        string ans;
        ll w, h, n;
        cin>>w>>h>>n;
        ll count = 1;
        if(w%2 == 1 && h%2 ==1){
            ans = "NO";
        }
        
        while(w%2 != 1 || h%2!=1){
            if(w%2==0){
                count*=2;
                w/=2;
            }else if(h%2==0){
                count*=2;
                h/=2;
            }
        }
        
        if(count>=n){
            ans = "YES";
        }else{
            ans = "NO";
        }
        
        cout<<ans<<"\n";
        
    }
    
    
    return 0;
    
}