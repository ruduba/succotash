#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        vector<int> ar(3);
        for(auto &e: ar){
            cin>>e;
        }
        
        sort(ar.begin(), ar.end());
        
        cout<<(ar[2]-ar[1] == ar[0] ? "YES" : "NO")<<"\n";

    }
    
    return 0;
    }