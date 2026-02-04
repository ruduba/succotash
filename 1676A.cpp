#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;

        int a = 0, b = 0;
        
        for(int i = 0; i<s.size()/2; i++){
            a += (s[i] - '0');
            b += (s[i+3] - '0');
        }
        
        cout<< (a == b ? "YES" : "NO" ) <<"\n";

    }
    
    
    
}