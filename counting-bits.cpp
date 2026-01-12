#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    
    ll n;
    cin>>n;
    
    ll count = 0;
    
    
    
    for(ll i = 1; i<=n; i++){
            
        count += bitset<64>(i).count();
        
    }
    
    cout<<count;
    
    return 0;
}