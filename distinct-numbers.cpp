#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    
    ll n;
    cin>>n;
    
    set<ll> s;
    
    for(ll i = 0; i<n; i++){
        
        ll tmp = 0;
        cin>>tmp;
        
        s.insert(tmp);
        }
    
    cout<<s.size();
    
    return 0;
}