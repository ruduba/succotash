#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    
    vector<long long> c(n);
    vector<long long> o(n);
    
    for(auto &e: c){
        cin>>e;
    }
    
    for(auto &e: o){
        cin>>e;
    }
    long long moves = 0;
    
    auto mC = min_element(c.begin(), c.end());
    auto mO = min_element(o.begin(), o.end());
    
    for(long long i = 0; i<n; i++){
        moves = moves + max(c[i] - *mC, o[i] - *mO);

    }

    cout<<moves<<"\n";
    }

    return 0;
}