#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    
    ll n;
    cin>>n;
    
    ll ans = 0;
    
    if(n%2 == 0){
        ans = n/2;
    }else{
        ans = (-1)*(n/2 + 1);
    }
    
    cout<<ans;
    
    return 0;
}