#include<bits/stdc++.h>
using namespace std;


int main(){
    
    long long t;
    cin>>t;
    
    while(t--){
        long long x, y;
        cin>>x>>y;
        long long sum = x+y;
        cout<< ((sum%3 == 0 && 2*x>=y && 2*y>=x)? "YES": "NO") << "\n";
    }
    return 0;
    }