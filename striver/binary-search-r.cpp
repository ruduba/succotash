#include<bits/stdc++.h>
using namespace std;


int binarySearch(vector<int> &ar, int low, int high, int k){
    
    if(low>high) return -1;
    int idx;
    
    int mid = (low+high)/2;
    
    if(ar[mid] == k){
        return mid;;
    }else if(k>ar[mid]){
        return binarySearch(ar, mid+1, high, k);
    }
    
     return binarySearch(ar, low, mid-1, k);
}


int main(){
    
    int n, k;
    cin>>n>>k;
    
    vector<int> ar(n);
    
    for(auto &e: ar){
        cin>>e;
    }
    
    int l = 0, r = n-1;
    
    cout<< binarySearch(ar, l, r, k) + 1;
    
    
    return 0;
}

//O(logN)