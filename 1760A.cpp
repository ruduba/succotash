#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        vector<int> m(3);
        for(auto &e: m){
            cin>>e;
        }
        
        sort(m.begin(), m.end());
        
        cout<<m[1]<<"\n";
        
    }
    
}