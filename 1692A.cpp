#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        
        int ar[4];
        for(auto &x: ar){
            cin>>x;
        }
        
        int cnt = 0;
        
        for(int i = 1; i<4; i++){
            if(ar[i] > ar[0]){
                cnt++;
            }
        }
        
        cout<<cnt<<"\n";
        
            
    }
    
}