#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a<b;
}

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        vector<int> m(3);
        for(auto &e: m){
            cin>>e;
        }
        
        sort(m.begin(), m.end(), cmp);
        
        cout<<m[1]<<"\n";
        
    }
    
}//