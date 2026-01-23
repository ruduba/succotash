#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        
    int n;
    cin>>n;
        
    int mnsum = INT_MAX;    
        
    vector<int> ar(n);
        
    for(auto &e: ar){
        cin>>e;
    }
    
    sort(ar.begin(), ar.end());
        
    for(int i = 0; i<n-1; i++){
        mnsum = min(mnsum, abs(ar[i]-ar[i+1]));
    }

    cout<<mnsum<<"\n";

    }
    
    return 0;
}