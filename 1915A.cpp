#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while(t--){
    
    vector<int> r(3);
    
    for(auto &e: r){
        cin>>e;
    }
    
    sort(r.begin(), r.end());
    if(r[0] != r[1]){
        cout<<r[0]<<"\n";
    }else{
        cout<<r[2]<<"\n";
    }

    }
}