#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    
    int n, k;
    cin>>n>>k;
    
    vector<int> ar(n);
    
    for(auto &e: ar){
        cin>>e;
    }
    
    int start = 0, end = n-1, idx = 0;
    
    while(start<=end){
        int mid = (start+end)/2;
        
        if(ar[mid] == k){
            idx = mid;
            break;
        }else if(ar[mid]>k){
            end = mid-1;
        }else if(ar[mid]<k){
            start = mid+1;
        }
    }
    
    cout<<idx+1;
    
    return 0;
}