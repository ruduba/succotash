#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    
    int n, h;
    cin>>n>>h;
    
    int ans = 0;
    
    for(int i = 0; i<n; i++){
        int tmp = 0;
        cin>>tmp;
        if(tmp > h){
            ans += 2;
        }else{
            ans += 1;
        }
    }
    
    cout<<ans;
    
    return 0;
}