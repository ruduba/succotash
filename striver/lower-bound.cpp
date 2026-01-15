#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int n, k;
    cin>>n>>k;
    
    vector<int> ar(n);
    
    for(auto &e: ar){
        cin>>e;
    }
    
    int l = 0, h = n-1;
    int idx;
    while(l<=h){
        
        int mid = (l+h)/2;
        
        if(ar[mid]>=k){
            idx = mid;
            h =  mid - 1;
        }else if(ar[mid] < k){
            l = mid + 1;
        }
    }
    
    cout<<idx;
    return 0;
}