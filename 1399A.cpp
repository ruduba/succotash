#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
    
        vector<int> q(n);
        
        for(auto &e: q){
            cin>>e;
        }
        
        int cnt = 0;
        
        sort(q.begin(), q.end());
        
        for(int i = 0; i<n-1; i++){
            
            if(q[i+1] - q[i] == 1 || q[i+1] - q[i] == 0) cnt++;
            
        }
        
        if(n == 1){
            cout<<"YES"<<"\n";
        }else if(n-cnt <= 1){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    
    }
    return 0;
}