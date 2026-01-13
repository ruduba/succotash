#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    
    int n, k;
    cin>>n>>k;
    
    vector<int> ar;
    
    for(int i = 0; i<n; i++){
        int tmp;
        cin>>tmp;
        ar.push_back(tmp);
    }
    
    int l = 0, r = 0;
    int cnt = 0, mxcnt = 0;
    
    int sum = ar[0];
    
    while(r<n){
        
        while( l<=r && sum > k){
            sum-=ar[l];
            l++;
        }
        
        if(sum == k){
            cnt = r - l + 1;
            mxcnt = max(cnt, mxcnt);
        }
        
        r++;
        
        if(r<n){
            sum+=ar[r];
        }

    }

    cout<<mxcnt<<"\n";

    return 0;
}

// "TC: O(N), SC: O(1)"