#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int n, q;
        cin>>n>>q;
        
        vector<int> a(n);
        vector<int> b(n);
        for(auto &e: a){
            cin>>e;
        }
        for(auto &e: b){
            cin>>e;
        }
        
        while(q--){
            int l, r;
            cin>>l>>r;
            int sum = 0;
            
            
            for(int i = l; i<=r; i++){
                    
                sum+= max(max(a[i], b[i]), max(a[i+1], b[i+1]));
                
            }
                        
            cout<<sum<<" ";
            
        }
        cout<<"\n";
    }
    
    return 0;
}