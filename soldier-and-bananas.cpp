#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, w;
    long long n;
    cin>>k>>n>>w;
    
    long long res = 0, amt = 0;
    
    for(int i = 1; i<=w; i++){
        res = res + (k*i);
    }
    
    if(n >= res) cout<< 0;
    else cout << res - n;
    
    return 0;
}