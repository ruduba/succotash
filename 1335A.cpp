#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        
        int n, ans = 0;
        cin>>n;
        
        
        if(n<=2){
            ans = 0;
        } else {
            
            if(n%2 == 0){
                ans = (n - ceil(n/2.0)) - 1;
            } else {
                ans = n - ceil(n/2.0);
            }
        }
        
        cout<<ans<<"\n";
        
    }
    
    
    
    
}