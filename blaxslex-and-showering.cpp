#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    
    long long a[n+1];
    for(int i = 1; i<=n; i++) cin>>a[i];
    
    long long sum = 0;
    for(int i = 2; i<=n; i++) sum += abs(a[i] - a[i-1]);
    
    long long ans = min(sum - abs(a[2] - a[1]), sum - abs(a[n] - a[n-1]));
    
    for(int i = 2; i<n; i++){
        ans = min(ans, sum - abs(a[i] - a[i-1]) - abs(a[i+1] - a[i]) + abs(a[i+1] - a[i-1]));
    }
    
    cout<<ans<<"\n";
}

int main(){

    int t;
    cin>>t;

    while(t--) solve();
    return 0;
}