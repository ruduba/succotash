#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    
    int t;
    cin>>t;
    
    while(t--){
        unsigned ll y, x;
        cin>>y>>x;
        unsigned ll ans  = 0;
        unsigned ll z = max(y, x);
        unsigned ll z2 = (z-1)*(z-1);
        
        // if odd row
        if(z%2 == 0){
            if(z == x){
                ans = z2 + y;
            }else{
                ans = z2 + 2*z - x;
            }
        }else{
            if(z == y){
                ans = z2 + x;
            }else{
                ans = z2 + 2*z - y;
            }
        }
    
        cout<< ans<<"\n";
    }
    
    
    
    return 0;
}