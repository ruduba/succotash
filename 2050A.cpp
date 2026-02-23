#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int n, m;
        cin>>n>>m;
        int cnt = 0, s = 0;
        while(n--){
            string tmp;
            cin>>tmp;
            
            s += tmp.size();
            
            if(s<=m){
                cnt++;
            }
            
            
        }
        
        
        cout<<cnt<<"\n";
    }
    
    
}