#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long n;
    cin>>n;
    
    long long ans = 0;
    
    vector<long long> nums;
    
    for(long long i = 0; i<n-1; i++){
        long long tmp;
        cin>>tmp;
        nums.push_back(tmp);
    }
    
    for(long long i = 1; i<=n; i++){
        ans = ans ^ i;
    }
    
    for(long long i = 0; i<n-1; i++){
        ans = ans ^ nums.at(i);
    }
    
    cout<<ans<<" ";
    
    return 0;
}