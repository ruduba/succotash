#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    int n;
    cin>>n;
    
    int ans = 0;
    
    for(int i = 0; i<n; i++){
        int tmp = 0;
        cin>>tmp;
        
        ans+=tmp;
        }
        
        if(ans>0) cout<<"HARD";
        else cout<<"EASY";
    
    return 0;
}