#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector<int> a(n);
    
    for(auto &e: a){
        cin>>e;
    }
    
    int p, cnt = 0;
    cin>>p;
    
    for(auto x: a){
        if(x == p) cnt++;
    }

    cout<<cnt;

}