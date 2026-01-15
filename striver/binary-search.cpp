#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, k;
    cin>>n>>k;
    
    vector<int> ar(n);
    
    for(auto &e: ar){
        cin>>e;
    }
    
    
    int idx;
    int l = 0, r = n-1;
    
    while(l<=r){
        int mid = (r+l)/2;
        if(ar[mid] == k){
            idx = mid;
            break;
        }else if(k<ar[mid]){
            r = mid - 1;
        }else if(k>ar[mid]){
            l = mid + 1;
        }
    }
    
    cout<<idx+1;
    
    
    return 0;
}