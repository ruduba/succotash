#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int> ar(n);
    for(auto &e: ar){
        cin>>e;
    }
    
    sort(ar.begin(), ar.end());
    
    int c = ar[n-1], cnt = 0;
    
    for(int i = 0; i<n-1; i++){
        cnt += (c - ar[i]);
    }
    
    cout<<cnt;
    
}