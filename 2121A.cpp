#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        
        int n, s;
        cin>>n>>s;
        
        int steps = 0;
        
        vector<int> ar(n);
        
        for(auto &e: ar){
            cin>>e;
        }
        
        steps = min(abs(ar[0]-s), abs(ar[n-1]-s)) + ar[n-1] - ar[0];
        
        cout<<steps<<"\n";
        
        
    }
    
    
    return 0;
}

//to submit