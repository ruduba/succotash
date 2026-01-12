#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

	int t;
	cin>>t;
	
	while(t--){
	    
	    int s, m, k;
	    cin>>s>>k>>m;
	    int ans = 0;
	    if(s<=k){
	        ans = max(0, s-m%k);
	    }else{
	        ans = ((m % (2*k)) < k ? s-m%k : k-m%k);
	    }
	    
	    cout<<ans<<"\n";
    }
    
}