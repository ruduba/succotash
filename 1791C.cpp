#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        
        int l = 0, r = n-1;
        int cnt = 0;
        
        while(l<r){
        if(s[l] != s[r]){
            
            l++;
            r--;
        }else break;
        }
        
        cnt = r - l + 1;
        
        cout<<cnt<<"\n";
        
    }
    return 0;
}