#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<string> p(n);
        for(auto &e: p){
            cin>>e;
        }
        
        
        
        for(int i = n-1; i>=0; i--){
            for(int j = 1; j<= p[i].size(); j++){
                if(p[i][j-1] == '#') cout<<j<<" ";
            }
        }
        
        cout<<"\n";
    }
    return 0;
}