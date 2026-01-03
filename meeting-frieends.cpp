#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
    
    int x, y, z;
    
    cin>>x>>y>>z;
    
    int mx = max({x, y, z});
    int mn = min({x, y, z});
    
    
    int result = mx - mn;
    
    cout<<result;
    
    return 0;
    
}